def josephus_list(n, k):
    """Making a list of killing order"""
    people = list(range(1, n + 1))
    killed = []
    i = 0
    while people:
        i = (i + k - 1) % len(people)
        killed.append(people.pop(i))
    return killed

def josephus_position(n, p, k):
    """When someone will die"""
    people = list(range(1, n + 1))
    i = 0
    kill_order = []
    while people:
        i = (i + k - 1) % len(people)
        kill_order.append(people.pop(i))
    return kill_order.index(p) + 1