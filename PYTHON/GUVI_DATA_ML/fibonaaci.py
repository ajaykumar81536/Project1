def fibonacci_series(n):
    fib_series = [0,1]
    if n > 2:
        for i in range(2, n):
            next_term = fib_series[i-1] + fib_series[i-2]
            fib_series.append(next_term)
        return fib_series
    elif (n>0 and n<3):
        return fib_series
    else:
        return "invalid"


n = int(input("Enter the value of n : "))

ans = fibonacci_series(n)
print("fibonnaci series of n is : ", ans)