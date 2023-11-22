"""
	@author:		Govind Grover <info@govindgrover.com>
	@functions:		[
		calculate_polynomial(p: list, x: float or int) -> float or int
		, derivate_polynomial(p: list) -> tuple
	]
	@version:		1.0
	@date:			November 21, 2023
"""

"""
	***************************************************************************
	************ [ USAGE of the below function where param is 'p' ] ***********
	***************************************************************************

	any n-th degree polynomial is in general writtem=n as:
		p(x) = a_0.x^0 + a_1.x^1 + a_2.x^2 + ... + a_n.x^n
	so, let us make a list of coefficients of all the 'x'
		ie, coff = [a_0, a_1, a_2, ..., a_n]
	therefore, on a zero-based indexing of the list we can directly see that
		the power of coefficient of the  1st element of 'coff' (denoted as
		coff[0]) is x^0

	similarly, for any i-th term of the poly., we have the coefficient as
		'coff[i]' and the power of the x with this coefficient is 'i'.

	Hence, we can manipulate the the polynomial from the text to programming
	code using this terminology also.

	---------------------------------------------------------------------------
	Now, the param  'p' as used in the following functions, is the list (array)
	of the coefficients of the respective term of x to some power.

	Further, 'len(p)' will denote the degree of the polynomial
	---------------------------------------------------------------------------
"""

"""
	@function	:	derivate_polynomial
	@version:		1.0
	@params		:	p: list (usage given at top)
					x: float or int
	@return		:	float or int
"""
def calculate_polynomial(p: list, x: float or int) -> float or int:
	ans = 0

	deg = len(p)

	for coff in p[-1::-1]:
		ans += coff * ((x) ** (deg - 1))
		deg -= 1

	return ans

"""
	@function	:	derivate_polynomial
	@version:		1.0
	@params		:	p: list (usage given at top)
	@return		:	tuple
"""
def derivate_polynomial(p: list) -> tuple:
	d = []

	deg = len(p)
	i = 0

	for i in range(deg):
		d.append(0)

	for i in range(deg):
		if i - 1 >= 0:
			d[i - 1] = (p[i] * i)
	
	return tuple(d)

"""
	@function	:	math_syantx_poly
	@version:		1.0
	@params		:	p: list (usage given at top)
					derivative_order: int (default = 0)
	@return		:	string
"""
def math_syantx_poly(p: list, derivative_order: int = 0) -> str:
	txt = 'p' + derivative_order * "\'" + '(x) = '

	deg = len(p)
	i = 0

	for coff in p:
		txt += f'({coff}).x^{i}'

		if i != (deg - 1):
			txt += ' + '

		i += 1

	return txt

# -----------------------------------------------------------------------------
# ---------------------- [ EXAMPLES FOR THE CODE ABOVE ] ----------------------
# -----------------------------------------------------------------------------

my_poly = [-4, 0, -1, -1, 1]

print(
	math_syantx_poly(
		my_poly
	)
	, calculate_polynomial(
		my_poly, 2
	)
	, math_syantx_poly(
		derivate_polynomial(
			my_poly
		)
		, derivative_order = 1
	)
	, calculate_polynomial(
		derivate_polynomial(my_poly)
		, 1.175
	)
	, sep='\n'
)
