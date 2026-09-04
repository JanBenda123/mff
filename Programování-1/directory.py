def sort_people(people):
    peopleFixed = people
    for person in peopleFixed:
        date = [int(x) for x in person.birth_date.split(".")]
        person.birth_date = list(date)[::-1]

    sortedPeople = sorted(peopleFixed, key=lambda x: (
        x.birth_date[0], x.birth_date[1], x.birth_date[2], x.last_name, x.first_name))

    for person in sortedPeople:
        date = ".".join(list(map(str, person.birth_date[::-1])))
        person.birth_date = date
    return sortedPeople
