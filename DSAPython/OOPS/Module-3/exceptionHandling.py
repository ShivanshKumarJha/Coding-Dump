while True:
    try:
        num = int(input('Enter the numerator : '))
        den = int(input('Enter the denominator : '))

        value = num / den
        print(value)
        break

    except ValueError:
        print("Numerator and Denominator should be integers")

    except ZeroDivisionError:
        print("Denominator should not be zero")