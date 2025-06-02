if __name__ == '__main__':
    students = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name, score])
    
    # Get all unique grades and sort them
    grades = sorted(set([s[1] for s in students]))
    second_lowest = grades[1]

    # Get names with the second lowest grade
    names = [s[0] for s in students if s[1] == second_lowest]
    names.sort()