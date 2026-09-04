from math import gcd
import requests
CT1 = int("02a362c0927a878cdcb72c40e854e89fcdcfc8c7e85a94d75749eb34f46bd42369f8c607e406bfacef95af4ddc9868822fbd1beeac0ea98155d2ae762fa77475c739535cf4405adab8603aecc3ab7b9408871dbbf04f031c73a87f6676ec8055a10cbd43c9271392807f92b927290d35dbdecc2052459d3bd8e582219690dc66c82141590faf431a68aa121eaeaee8375406f988560bea614d8ca3e806aaf48024c53312697e2bf14e44587e5771c4bd1b7638eef40da39bf6abc7bfce76d89b78d0f208e4d3d146218dda1c28cde0d3f79a3937580dc9e46ef60128c2d1850f5f31f084ca79e9360b41a9e0d2b724f77a9d04c93f23f46964085748305f67a6",16)
CT2 = int("10cfbd1570d66b4e261e9f14c2795c2ca22302c1639430bb2cbc67c43bddc7f7a9e000f4d74cdf762d0cabbe1f29e5e595328023fe111de8186d10aa57789d34d928daa345f143ba23127d8e35c6f1deabf8aaa2461555c0b89c7fe33f2e29882639fcbefeee449a9f24bf1b95c814a5957b4b8276e2b62ccedfeb234502d16024603688c1f9b33250bdd1edf5bfe988e835b545464f9c145fa6cf6219583e661bb6080f2f3246e428626f14049a9c7eac490e2678c9be78421e9635cf5b1b594166bd0868c965a768be8f012bb63e10796923bf4434e262f0f47d2c429817910af95d8b6b2fb8dcb752bcc49d6425188af4df1be9ca395edacd9a47625b15b6",16)
CT3 = int("14d4a1b4123e93c59ed5ac927879fc2c7b6af3ea4a847f59ec5c76ad8b7f3e9a06d870fa1c82c9a923172f321ee507bf6e971f14884406bad96df7af2923f1442fed795613fb2abb3f0a0cdd22239ac34211c92aaabb8d4abdb0dcfb69f478032ea2eec53a05b40e3ccbe600508c43f798280d0c03112fbe4e087329cb4bf06154cd11738994bcf2dc951ffe555188b57900862d74685753a0c1c1e26b5b153a10a2ef24e6f96beed483769deab908b10b2eae823aa13cd5763fe447274ef9f99edefcf1b9fc1aca60eda002804bbd68576128c004089c4ecfecdb2f50f2a7fafb44256f50fdef0a6b8fc75fd41f953207c396d045c7c39d0258fedf07690557",16)
N1  = int("053e1a96c0350834afde1e9c573465141ca63124d6b671ea5547f4303c2c35c5a45cb3b4dd7e34780b7c96d7ce87675c31bba8acbc433d634cc55bbd4bfb104633445b4d3c9a84d46d77d1a3904aaad2be7fb7651dcd1424ef27315c1b29298664cd64944d9c7ebb9f7284d508a2f682437657eb3daa9071131b7f60b21d3ccdec9e7011a2fd215569729d3f0dfebf2361a44af7bda815a3e82e04d6d5483a3f957fe0e5db142b35eab9c54cfb36cb37566fedd832ac51dfc74118072d1dbb3c17e73fd9710258e14cf129494a46f54f3777b6dee93c97395dc7d2fe8beb44fe6144e6d6dbc15a48e37e0a9e545d71c46295e7c6217f29e175316fc5dbfda797",16)
N2  = int("2b4eab5c7f9fa049bcde38339416d78bf82bb229042d970e3a48cd17b7109d78ecc6b72ca0bbeb095bf4b5b67390f1e74096f3b637999a7a684fd606ba85801c75b3d3e536dff29eed33b1116619d83078223301cd4041fefa811b5fd835918b387614e8f7b88ad18520c3fb2cdee726539192056de257786830db04260e5a39e55b3f7d60a0c4d522f1aff1aaa636b497c0fdb0a505f0e83c63d0b8c306a16ce235e4ef369fd896867cbc59df4fd373caa1d3a8b145aa95080291c95e2431176c339343eb77d5c24b992b4527717c7734fbc7e27ec5b986e358a01423f18bc689be7405acd99515b2f4639bf0696694e0e3ec08909e907caec2c0cf1942de3b",16)
N3  = int("6e1f8a0179ff48793cc6b376926025d029b3b038c7f1acc18dd7d4ae0ed636f6a7c650f4b6f4de7910541893f0d9bbc93b323fbdda3b1ae146e1c636b2e4023aa6f5b60f5793562e3aedad485b7fe9895d2764de8222e5e25e505bd11dd7f6d9019ee21e640b459e70c811e29044a0f7d683c38041e68943b4c19672e294d8bd434346807c912ddf81b53e765d4e3c0d99ec9bc221e57add28c47384f5e894ed22c36d6a2170fa1503d6d98b6949f7db692d2d1b8d7c71f899c61a6bfb8ddf4ac6143b19476c6c3d4befed3d22ed4430377677b73155116bb608839db9cb53272dacf3e2aa06c26511747ebba6043bcee3d0a3825c74814ba3c99a964978f991",16)

def cube_root_if_perfect(n):
    if n == 0:
        return 0

    x = n
    while True:
        y = (2 * x + n // (x * x)) // 3
        if y >= x:
            break
        x = y

    if x * x * x == n:
        return x
    elif (x + 1) * (x + 1) * (x + 1) == n:
        return x + 1
    else:
        return None


def quick_cube_check(n):
    if not (n % 7 in (0, 1, 6)): return False
    if not (n % 9 in (0, 1, 8)): return False
    if not (n % 11 in (0, 1, 2, 9, 10)): return False
    if not (n % 13 in (0, 1, 5, 8, 12)): return False
    if not (n % 14 in (0, 1, 5, 8, 9, 13)): return False
    if not (n % 15 in (0, 1, 8, 14)): return False
    if not (n % 16 in (0, 1, 7, 9, 15)): return False
    if not (n % 17 in (0, 1, 8, 9, 16)): return False
    if not (n % 18 in (0, 1, 7, 11, 17)): return False
    if not (n % 19 in (0, 1, 7, 8, 11, 12, 18)): return False
    if not (n % 20 in (0, 1, 3, 7, 13, 17, 19)): return False
    if not (n % 21 in (0, 1, 8, 13, 20)): return False
    if not (n % 22 in (0, 1, 7, 8, 14, 15, 21)): return False
    if not (n % 23 in (0, 1, 2, 8, 9, 16, 17, 22)): return False
    if not (n % 24 in (0, 1, 7, 11, 17, 19, 23)): return False
    if not (n % 25 in (0, 1, 2, 3, 8, 17, 22, 23, 24)): return False
    if not (n % 26 in (0, 1, 7, 8, 18, 19, 25)): return False
    if not (n % 27 in (0, 1, 8, 10, 17, 19, 26)): return False
    if not (n % 28 in (0, 1, 7, 8, 15, 21, 22, 27)): return False
    if not (n % 29 in (0, 1, 8, 12, 15, 21, 22, 28)): return False
    if not (n % 30 in (0, 1, 7, 8, 13, 17, 19, 23, 27, 29)): return False
    if not (n % 31 in (0, 1, 8, 12, 15, 16, 21, 22, 28, 30)): return False
    if not (n % 32 in (0, 1, 7, 9, 15, 17, 23, 25, 31)): return False
    if not (n % 33 in (0, 1, 8, 9, 17, 18, 26, 27)): return False
    if not (n % 34 in (0, 1, 8, 9, 13, 18, 25, 26, 33)): return False
    if not (n % 36 in (0, 1, 7, 11, 17, 19, 23, 27, 29, 35)): return False
    if not (n % 37 in (0, 1, 8, 10, 12, 15, 19, 21, 27, 28, 36)): return False
    if not (n % 38 in (0, 1, 8, 9, 11, 12, 16, 19, 27, 28, 36, 37)): return False
    return True
    
class Chinese:
    def __init__(self,b,m):
        self.m = m
        self.b = b

    def __eq__(self,other):
        return (self.m==other.m) and (self.b==other.b)
    def __repr__(self):
        return(f"(b: {self.b}, m: {self.m})")

def extended_gcd(a, b):
    x0, x1 = 1, 0
    y0, y1 = 0, 1

    while b != 0:
        q = a // b
        a, b = b, a % b
        x0, x1 = x1, x0 - q * x1
        y0, y1 = y1, y0 - q * y1

    return a, x0, y0

def mod_inverse(a, n):
    g, x, _ = extended_gcd(a, n)
    if g != 1:
        raise ValueError(f"Inverze neexistuje, protože gcd({a}, {n}) = {g}")
    else:
        return x % n

def chinese_combine(c1:Chinese,c2:Chinese)->Chinese:
    m1, m2 = c1.m, c2.m
    b1, b2 = c1.b, c2.b
    inv = mod_inverse(m1, m2)

    b = (b1 + ((b2 - b1) * inv % m2) * m1) % (m1 * m2)
    return Chinese(b, m1 * m2)


C1 = Chinese(CT1,N1)
C2 = Chinese(CT2,N2)
C3 = Chinese(CT3,N3)

c=chinese_combine(C1,C2)
c=chinese_combine(c,C3)

b = c.b

print(hex(cube_root_if_perfect(b)))
    

# This is the message you are looking for. Note how stupid its content is. Nevertheless, it is really the message you are looking for. Congratulations, I guess.
r = requests.post(url="https://krypto.ptera.cz/chinese.php",data={"answer": "This is the message you are looking for. Note how stupid its content is. Nevertheless, it is really the message you are looking for. Congratulations, I guess."})
print(r.text)