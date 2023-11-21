"""
	@author: Govind Grover <info@govindgrover.com>
"""

# -----------------------------------------------------------------------------
# ----------------------------- [ Methods Used ] ------------------------------
# -----------------------------------------------------------------------------
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

# -----------------------------------------------------------------------------
# ----------------------------- [ Main Program ] ------------------------------
# -----------------------------------------------------------------------------

# define the number of iterations
i = 5

#  coefficients of the given polynomial
fn_coff = [-10, 0, 0, 1]

p, p_i = 2, 0
counter = 0

while counter < i:
	p_i = p - (calculate_polynomial(fn_coff, p)/calculate_polynomial(derivate_polynomial(fn_coff), p))

	p = p_i
	counter += 1

print("Approx. root at: ", p)

"""
# Direct method:

# define your function here
fn = lambda x: (x ** 3) - 10

# define your fn's derivative
fn_dash = lambda x: 3 * (x ** 2)

# define the number of iterations
i = 5

p, p_i = 2, 0
counter = 0

while counter < i:
	p_i = p - (fn(p)/fn_dash(p))
	p = p_i

	counter += 1

print(p)
"""