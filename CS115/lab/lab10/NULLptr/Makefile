COMPILER = g++ # or CC if you prefer it on Hercules
FLAGS = -std=c++11

DRIVER = main
FILE = LinkedList


$(DRIVER) : ~/.newgcc $(FILE).o $(DRIVER).o  #the first character on the next line is a tab 
	$(COMPILER)  -o  $(DRIVER) $(FILE).o $(DRIVER).o

$(DRIVER).o :  $(DRIVER).cpp  $(FILE).cpp $(FILE).h 
	$(COMPILER) -c $(FLAGS) $(DRIVER).cpp  -o $(DRIVER).o

$(FILE).o :  $(FILE).cpp $(FILE).h
	$(COMPILER) -c $(FLAGS) $(FILE).cpp  -o  $(FILE).o

~/.newgcc:
	@echo
	@touch ~/.newgcc
	@echo "----IF YOU ARE ON HERCULES, PLEASE EXIT THIS TERMINAL AND TRY AGAIN----"
	@echo

clean:
	@ /bin/rm -f *.o
