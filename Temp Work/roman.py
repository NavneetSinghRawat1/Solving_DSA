def int_to_roman(num):
    # Mapping values to symbols in descending order
    mapping = [
        (1000, "M"), (900, "CM"), (500, "D"), (400, "CD"),
        (100, "C"), (90, "XC"), (50, "L"), (40, "XL"),
        (10, "X"), (9, "IX"), (5, "V"), (4, "IV"), (1, "I")
    ]
    
    result = ""
    for value, symbol in mapping:
        # Check how many times the value fits into num
        while num >= value:
            result += symbol
            num -= value
    return result

def main():
    try:
        start = int(input("Enter the start of the range: "))
        end = int(input("Enter the end of the range: "))
        
        if start < 1 or end > 3999 or start > end:
            print("Please enter a valid range between 1 and 3999.")
            return

        # Opening a file named 'roman_conversions.txt' in write mode
        with open("roman_conversions.txt", "w") as f:
            f.write("Integer -> Roman Conversion\n")
            f.write("-" * 27 + "\n")
            
            for i in range(start, end + 1):
                roman = int_to_roman(i)
                # Write to file instead of printing to console
                f.write(f"{i}\t->\t{roman}\n")
                
        print("Success! Results have been saved to 'roman_conversions.txt'.")
        
    except ValueError:
        print("Invalid input. Please enter integers only.")

if __name__ == "__main__":
    main()