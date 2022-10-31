def is_prime(n):
    is_prime_num = True

    if n == 0 or n == 1:
        return False
    
    i = 2
    while i <= n / 2:
        if n % i == 0:
            is_prime_num = False
            break
        i += 1 

    return is_prime_num

def main():
    n = int(input("Ievadi intervāla sākumpunktu: "))
    while  n < 0:
        n = int(input("Mēģini vēlreiz: "))

    m = int(input("Ievadi intervāla beigu punktu: "))
    while m <= n:
        m = int(input("Mēģini vēlreiz, M > N: "))

    primes = []

    while n < m:
        if is_prime(n):
            primes.append(n)

        n += 1

    prime_str = "Pirmskaitļi:"

    for prime in primes: 
        prime_str = f"{prime_str} {prime}"

    print(prime_str)

ok = "1"

while ok == "1":
    main()
    print("Mēģināt vēlreiz?")
    print("1 [jā]")
    print("2 [nē]")
    ok = input("")