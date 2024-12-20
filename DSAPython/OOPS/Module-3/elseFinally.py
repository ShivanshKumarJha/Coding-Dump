class ZeroDenominatorError(Exception):
    pass

while True:
    try:
        num = int(input('Enter the numerator : '))
        den = int(input('Enter the denominator : '))

        if den == 0:
            raise ZeroDenominatorError('Denominator should not be zero')
        
        value = num / den

    except ValueError:
        print("Numerator and Denominator should be integers")

    except ZeroDivisionError:
        print("Division by zero is not allowed")

    except ZeroDenominatorError as e:
        print(e)

    except:
        print("Some exception is raised")

    else:  # This block will be executed if no exception is raised 
        print(value)
        break

    finally: # This block will be executed irrespective of exception is raised or not
        print("This is always executed")