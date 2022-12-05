CC:=gcc -Wall
RM:=rm
#SRC:=*.c
SRC:=$(wildcard $(srcdir)*.c)
HEAD:=$(wildcard *.h)
#Subst change les termes de bindir contenues dans SRC.o en srcdir
OBJ:=$(subst $(srcdir), $(bindir),$(SRC:.c=.o))
PROG:=main
CP:=cp
TEST:=$(wildcard %.o)
REPERTOIRE_OBJET:=bindir/
REPERTOIRE_EX=bindir/
REPERTOIRE_SOURCE:=srcdir/
REPERTOIRE_HEAD=srcdir/
REPERTOIRE_DOC:=docdir/
REPERTOIRE_SAVE:=savedir/
$(PROG): $(OBJ)
	$(CC)  -o $@ $^

%.o: %.c $(HEAD)
	$(CC) -c $<
	
.PHONY:clean
#PHONY lance la fonction clean malgès qu'il y ait un fichier clean dans le répertoire

saveALL:saveOBJ saveHEAD saveSRC
	make saveOBJ
	make saveHEAD
	make saveSRC
saveOBJ:
	$(CP) $(OBJ) $(REPERTOIRE_OBJET)
saveHEAD:
	$(CP) $(HEAD) $(REPERTOIRE_HEAD)
saveSRC:
	$(CP) $(SRC) $(REPERTOIRE_SOURCE)
clean:
	$(RM) -f $(PROG) $(OBJ)
cleanALL:
	find -iname "*.o"|xargs rm*
	
restore:
	make clean
	sudo cp -r $(REPERTOIRE_OBJET) /
	sudo cp -r $(REPERTOIRE_SOURCE) /
	sudo cp -r $(REPERTOIRE_DOC) /
#main.o gui.o ia.o score.o ex1.o
