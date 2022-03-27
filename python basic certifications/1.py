def avg(*num):
    return float(sum(num))/len(num)
    
def main():
    print(avg(1,2,3))
    print(avg(1,2,3,4,5))
    print(avg(1,2,3,4,5,6,7,8,9,10))

if __name__ == '__main__':
    main()