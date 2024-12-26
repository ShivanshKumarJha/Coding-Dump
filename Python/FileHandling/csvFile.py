import csv

'''
    with open('Datasets/year2017.csv',encoding='utf-8') as file_obj:
        file_data = file_obj.readlines()
        print(type(file_data))
        print(file_data[:5])

    with open('Datasets/year2017.csv',encoding='utf-8') as file_obj:
        file_data = csv.reader(file_obj)
        print(type(file_data))
        
        for row in file_data:
            print(row)

    with open('Datasets/year2017.csv') as file_obj :
        file_data = csv.reader(file_obj, delimiter = '|')
        
        for row in file_data :
            print(row)

    with open('Datasets/year2017.csv') as file_obj :
        # remove the initial space in the word example: '  1'
        file_data = csv.reader(file_obj, delimiter = '|', skipinitialspace = True)
        
        for row in file_data :
            print(row)

    with open('Datasets/year2017.csv') as file_obj :
        file_data = csv.reader(file_obj, delimiter = '|', skipinitialspace = True)
        
        file_list = list(file_data)
    print(file_list)

    with open("Datasets/year2017.csv") as file_obj:
        file_data = csv.DictReader(file_obj,skipinitialspace=True)

        for row in file_data:
            print(row)

    # Custom key names
    with open("Datasets/year2017.csv") as file_obj:
        file_data = csv.DictReader(file_obj,skipinitialspace=True,fieldnames=('a','b','c'))

        for row in file_data:
            print(row)
'''

# Extracting particular column
with open("Datasets/year2017.csv") as file_obj:
    file_data = csv.DictReader(file_obj,skipinitialspace=True)

    for row in file_data:
        print(row['Weapon_type'])