ps = [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199]

for p in ps:
    possible_cubes = set()
    for i in range(p):
        possible_cubes.add((i**3)%p)
    possible_cubes = list(possible_cubes)
    if len(possible_cubes)>p//2: continue
    print(f"if not (n % {p} in {sorted(possible_cubes)}): return False")
