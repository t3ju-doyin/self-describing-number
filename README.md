# self-describing-number
Olateju Adedoyin Adesewa
222451
Pseudocode for the practical assignment 3, self-describing number
START
Open the file
Set file variable = openRead("C:pathToFile/file.txt")
Declare counter = 0
Declare an array
Declare a test case variable 
Set length as length of test case
while reading the file
	remove whitespace in text
	if counter >=1
		for character in test case
			array[]+=character
		END FOR
		for i < length
			for j< length
				if array[j] ==i
					counter+=1
				END IF
			if counter == array[i]
				print("It is a self-describing number")
			else
				print("Not a self-describing number")
				break
			END IF
		END FOR
END WHILE
close the file

END
