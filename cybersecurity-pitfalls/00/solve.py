import sys,requests as r
p='please'
print(r.post(f"http://{sys.argv[1]}/get-flag?seriously=true",{p:'pretty '+p}).text)