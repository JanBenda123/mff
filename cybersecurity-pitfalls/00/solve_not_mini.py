import sys
import requests

target = sys.argv[1]

url = f"http://{target}/get-flag"


response = requests.post(
    url, 
    params = {"seriously" : "true"},
    data = {"please" : "pretty please"}
)

flag = response.text
print(flag)

