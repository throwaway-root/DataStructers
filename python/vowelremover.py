def name_vowel(name):
	vowels= ('a','A','e','E','i','I','o','O','u','U')
	for x in name:
		if x in vowels:
			name=name.replace(x,"")
	print("Your name When Vowels are removed is : ",name)


name=input('Enter your Name: ')
name_vowel(name)
