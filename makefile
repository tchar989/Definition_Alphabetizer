OPTS = -g -c -Wall -Werror
definition_alphabetizer: definition_alphabetizer_DRIVER.o definition_alphabetizer.o 
	g++ -o definition_alphabetizer definition_alphabetizer_DRIVER.o definition_alphabetizer.o 
definition_alphabetizer_DRIVER.o: definition_alphabetizer_DRIVER.cc
	g++ $(OPTS) definition_alphabetizer_DRIVER.cc
definition_alphabetizer.o: definition_alphabetizer.cc definition_alphabetizer.h
	g++ $(OPTS) definition_alphabetizer.cc
clean:
		rm ~f*.o*~a.out