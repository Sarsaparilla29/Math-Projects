print("BMI Calculator")
height = int(input("Height(in inches): "))
weight = int(input("Weight(in pounds): "))

BMI = (weight * 703) / pow(height,2)
print("BMI: {:.2f}".format(BMI), end=" ") 
if BMI > 30:
    print("Obese")
elif BMI > 25:
    print("Overweight")
elif BMI > 18.5:
    print("Normal Weight")
else:
    print("Underweight")
