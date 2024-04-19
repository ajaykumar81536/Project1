MAX_LINES = 5
MAX_BET = 10


def deposit():
    while True:
        amount = input("\nHow much amount, you want to deposit ? $ ")
        if amount.isdigit():
            amount = float(amount)
            if amount > 0:
                break
            else:
                print("Amount must be greater than '0' !! ")
        else:
            print("Please enter the valid amount($) !!\n")        
    return amount

def get_no_of_lines():
    while True:
        lines = input("\nEnter the number of lines to bet on (1-" + str(MAX_LINES)+ ") : ")
        if lines.isdigit():
            lines = int(lines)
            if lines > 0:
                break
            else:
                print("Please enter the lines in RANGE !! ")
        else:
            print("Please enter the number (in range) !! \n")        
    return lines

def get_bet():
    while True:
        bet = input(f"\nHow much do you want to bet on each line (1-{MAX_BET}) ? $")
        if bet.isdigit():
            bet = int(bet)
            if (bet >= 1 and bet <= MAX_BET):
                break
            else:
                print(f"Please enter in range (1-{MAX_BET}) !! ")
        else:
            print("Please enter the number (in range) !! \n")        
    return bet


def main():
    balance = deposit() 
    lines = get_no_of_lines()
    while True:
        bet = get_bet()
        Total_bet = bet * lines
        if Total_bet > balance:
            print(f"you have NOT sufficient ammount to bet !! ")
            print("Your current balance is $", balance)
        else:
            break    
    print(f"\n You are betting ${bet} on {lines} lines. Total bet is : {Total_bet}")

main()