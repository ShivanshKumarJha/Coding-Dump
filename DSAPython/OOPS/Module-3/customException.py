class ZeroDenominatorError(Exception):
    pass

while True:
    try:
        num = int(input('Enter the numerator : '))
        den = int(input('Enter the denominator : '))

        if den == 0:
            raise ZeroDenominatorError('Denominator should not be zero')
        
        value = num / den
        print(value)
        break

    except ValueError:
        print("Numerator and Denominator should be integers")

    except ZeroDivisionError:
        print("Division by zero is not allowed")

    except ZeroDenominatorError as e:
        print(e)

    except:
        print("Some exception is raised")