
import random
x = random.randint(1,6)
y = random.randint(1,6)
print("Dau cu zaru", x, y, end = " ")
if x == 6 and y == 5:
	print("n-am nevoie de servici", end = "")
elif x == 6 and y == 6:
	print("ca mine nu se mai naste", end = "")
print(end = '\n');
