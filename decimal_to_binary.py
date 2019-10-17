#Solution for Problem 2 Convert Decimal to Binary number system.

# Function to covert decimal number 
# to binary using recursion 
def DecimalToBinary(num):
	if num > 1: 
		DecimalToBinary(num // 2) 
	print(num % 2, end = '') 

# Starting Program Execution
if __name__ == '__main__': 
	dec_val = int(input())
	DecimalToBinary(dec_val) 
