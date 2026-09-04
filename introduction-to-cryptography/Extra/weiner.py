from math import gcd, isqrt

e = 52348152590515409359288488185870004124892851918616869350929652272043258544819945862736383680817391060976075825335050137447877560324423456082509436888574510484493832805224967067267791302188263440580429757672424896892737563376251031388214078609219186038394628736685299383389667756732490494648002861436436239623
n = 53315097963673234639683464245748908952270694276355566673457456385711891500776159950770408939855441503494573385327399182783659499374165894161912443715810382699871954539433955148416999826902624662370389811107305215453220559333069680056425182703170400148758355549826115582845053711221065112379968146165687179561
c = 1591058466546575738356450082916247470084154312676430254823241764324300035047752673963210238694435509676880090365713809932663015762177270511344969748519889051892667284451276946385762981371680763983902961439896208184742700698064903275941319826436778576520870098906187293979277148231123976916136876448898540312


# e = 17993
# n = 90581
# c = 0


def decompose_to_cf(nominator: int, denominator:int) -> list[int]:
    r_prev = denominator
    r_prev_prev = nominator
    expansion = []

    while r_prev !=0:
        expansion.append(r_prev_prev // r_prev)
        r = r_prev_prev % r_prev
        r_prev_prev = r_prev
        r_prev = r 
    
    return expansion

def construct_cf_approximations (expansion : list[int])->list[tuple[int,int]]:
    approximations = [(expansion[0],1)]
    A = (expansion[0],1)
    B = (1,0)
    for coeff in expansion[1:]:
        A = (coeff * A[0] + A[1], A[0])
        B = (coeff * B[0] + B[1], B[0])
        g = gcd(A[0],B[0])
        approximations.append((A[0]//g,B[0]//g))
    return approximations

def find_private_key(approximations: list[tuple[int,int]]) -> int:
    for k,d in appr:
        if k ==0:
            continue
        if (e*d-1)%k != 0:
            continue
        phi = (e*d-1) // k

        b = -(n-phi+1)
        c = n
        
        discriminant = b**2-4*c
        sqrt_discr = isqrt(discriminant)
        if sqrt_discr**2 != discriminant:
            continue
        return pow(e, -1, phi)
        


exp = decompose_to_cf(e,n)
appr = construct_cf_approximations(exp)
d = find_private_key(appr)

plaintext = pow(c,d,n)
print(plaintext)




    
