print("Enter the cipher text")
ciphertext=str(input())
print("The cipher text is ",ciphertext)
total_length=len(ciphertext)
print("Total length of cipher text is",total_length)

frequency_dictionary={
'A':0,
'B':0,
'C':0,
'D':0,
'E':0,
'F':0,
'G':0,
'H':0,
'I':0,
'J':0,
'K':0,
'L':0,
'M':0,
'N':0,
'O':0,
'P':0,
'Q':0,
'R':0,
'S':0,
'T':0,
'U':0,
'V':0,
'W':0,
'X':0,
'Y':0,
'Z':0}



alphabetstring=""
for i in ciphertext:
	for j in frequency_dictionary.keys():
		if j==i:
			frequency_dictionary[j]=frequency_dictionary[j]+1
print("The frequency of words are as follows \n",frequency_dictionary)

print ("Now enter a possible key for substitution")
key=str(input())

for i in frequency_dictionary.keys():
	alphabetstring=alphabetstring+i
print("Alphabet string is ",alphabetstring)
transalate_table=str.maketrans(alphabetstring,key)
plain_text=ciphertext.translate(transalate_table)

print("The plain text is",plain_text)












