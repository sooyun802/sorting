all :
	gcc -o Bubble.out main.c bubble.c general.c -D BUBBLE
	gcc -o Selection.out main.c selection.c general.c -D SELECTION
	gcc -o Insertion.out main.c insertion.c general.c -D INSERTION
	gcc -o Quick.out main.c quick.c general.c -D QUICK

bubble: 
	gcc -o Bubble.out main.c bubble.c general.c -D BUBBLE

selection:
	gcc -o Selection.out main.c selection.c general.c -D SELECTION

insertion:
	gcc -o Insertion.out main.c insertion.c general.c -D INSERTION

quick:
	gcc -o Quick.out main.c quick.c general.c -D QUICK

clean	:
	rm -rf *.out

