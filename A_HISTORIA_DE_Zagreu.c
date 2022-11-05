#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <locale.h>



	void main_menu();
	void how_to_play();
	void credits();
	void learn_game();
	void tutorial();
	void transition();
	void branch();
	void branch2();
	void branch3();
	void branch4();
	void branch5();
	void branch6();
	void branch7();
	void battle_screen();
	void game_battle();
	void step1();
	void step2();
	void step3();
	void lose();
	void end();
	int potion, potion_effect, special; //itens de uso limitado 
	int fase, cerastes, hidra, cerberus, hades; //inimigos
	int life, cerastes_life, hidra_life, cerberus_life, hades_life;//status de vida
	int attack, cerastes_attack, hidra_attack, cerberus_attack, hades_attack;//status de ataque 
	int defense, cerastes_defense, hidra_defense, cerberus_defense, hades_defense;//status de defesa 
	int randomness_system(int min, int max); //sistema de aleatoriedade
	int system_return, final; 
	
	
	int main (){
		hidra = 0;
		cerastes = 0;
		cerberus = 0;
		hades = 0;
		fase = 0;
		attack = 15;
		defense = 10;
	
		cerastes_life = 30;
		hidra_life = 75;
		cerberus_life = 75;
		hades_life = 100;
		final = 0;
		system("cls");
		main_menu();
		return 0;
	}
		
	void main_menu()
	{
			setlocale(LC_ALL, "Portuguese");
			
		system("cls");
		
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||-    �     - A HISTORIA DE ZAGREU -     �    -||\n");
		printf("\t||=====\6==================================\6=====||\n");
		printf("\t||                                              ||\n");
		printf("\t||              // 1-INICIAR   \\\\               ||\n");
		printf("\t||                 2-COMO JOGAR                 ||\n");
		printf("\t||                 3-CR�DITOS                   ||\n");
		printf("\t||              \\\\ 4-SAIR      //               ||\n");
		printf("\t||=====\6==================================\6=====||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
		switch(getch())
			{
				case '1':
					learn_game();
					break;
					
				case '2':
					how_to_play();
					break;
					
				case '3':
					credits();
					break;
					
				case '4':
						exit(0);
					break;
					
				default:
					main_menu();
			}
	}
	
	void how_to_play()
	{
		system("cls");	
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||-       �       - Como Jogar -       �       -||\n");
		printf("\t||=====\6==================================\6=====||\n");
		printf("\t||                                              ||\n");
		printf("\t||   A Historia de Zagreu � um jogo onde suas   ||\n");
		printf("\t|| escolhas definem o final da historia, a cada ||\n");
		printf("\t||     situa��o de escolha que o personagem     ||\n");
		printf("\t||   encontra, pode alterar o rumo de sua vida. ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
		getch();
		
		system("cls");	
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||-       �       - Como Jogar -       �       -||\n");
		printf("\t||=====\6==================================\6=====||\n");
		printf("\t||                                              ||\n");
		printf("\t||   Em situa��es de batalha, o jogador poder�  ||\n");
		printf("\t|| escolher entre atacar, defender, ou usar uma ||\n");
		printf("\t||   po��o que aumenta seu status de ataque e   ||\n");
		printf("\t||                    defesa.                   ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
		getch();
		
		system("cls");	
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||-       �       - Como Jogar -       �       -||\n");
		printf("\t||=====\6==================================\6=====||\n");
		printf("\t||                                              ||\n");
		printf("\t||   Tome cuidado quando usar as po��es ou o    ||\n");
		printf("\t|| ataque especial, pois se tentar reutiliza-los||\n");
		printf("\t||   antes de o tempo de recarga se concluir    ||\n");
		printf("\t||            a rodada ser� perdida.            ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                   BOM JOGO                   ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
		getch();
		main_menu();
	}
	
	void credits()
	{
			
		system("cls");	
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||-       �        - Cr�ditos -        �       -||\n");
		printf("\t||=====\6==================================\6=====||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||       Christopher Kevin Teixeira Costa       ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
		getch();
		main_menu();
	}
	
	void learn_game()
	{
	 	
 	life = 100;
 	system("cls");
 	
 	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t|| Pers�fone, era uma mulher bonita que era alvo||\n");
	printf("\t||        de desejo de muitos deuses.           ||\n");
	printf("\t|| Em um dia ela acabou sendo raptada por Hades,||\n");
	printf("\t|| deus do submundo,quando sua m�e ficou sabendo||\n");
	printf("\t|| do ocorrido se entristeceu e,assim, os campos||\n");
	printf("\t|| e os alimentos foram atingidos pela tristeza.||\n");
	printf("\t||   Hades n�o permitia que ela voltasse para   ||\n");
	printf("\t|| junto  de seus pais,pois a queria s� para si,||\n");
	printf("\t||  envolto nesse pensamento ele decide ent�o   ||\n");
	printf("\t||   ludibriar a jovem mo�a e faz�-la comer da  ||\n");
	printf("\t|| rom�, um fruto que selaria a uni�o do casal. ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
 	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||    Dias depois de ser enganada ela sai do    ||\n");
	printf("\t||  pal�cio e vai at� o campo de asf�delos e l� ||\n");
	printf("\t||  encontra uma cobra, e assim os dois come�am ||\n");
	printf("\t||                 a conversar.                 ||\n");
	printf("\t||  Pers�fone estava t�o envolvida na conversa, ||\n");
	printf("\t|| que acabou revelando ent�o sua historia, mas ||\n");
	printf("\t|| ent�o a cobra compadecida com a situa��o da  ||\n");
	printf("\t||  jovem, revela ser Zeus, deus dos c�us. Ela  ||\n");
	printf("\t||   ent�o clama  por ajuda e � correspondida,  ||\n");
	printf("\t||   ou era o que esperava, mal sabia ela que   ||\n");
	printf("\t||aquilo era apenas uma conversa para engana-la,||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
 	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t|| e ent�o numa atitude brusca Zeus a deflora e ||\n");
	printf("\t||      a deixa para sofrer naquele lugar.      ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||      Ap�s isso, passaram-se 18 anos...       ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
 	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||  Zagreu, fruto do caso de Zeus e Persefone,  ||\n");
	printf("\t||  cresceu revoltado com os deuses, com o que  ||\n");
	printf("\t||    fizeram com sua m�e, e de como ele foi    ||\n");
	printf("\t||            tratado por todos.                ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
 	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t|| Abrindo lentamente os olhos, e com uma imensa||\n");
	printf("\t||             dor no corpo...                  ||\n");
	printf("\t||        Zagreu fala ainda sonolento:          ||\n");
	printf("\t|| - Onde estou?... Como vim parar aqui?...     ||\n");
	printf("\t||  Olhando ao redor nota-se algo que aparenta  ||\n");
	printf("\t||               ser apetitoso.                 ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
	 	
 	system("cls");
 	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||   -Isso n�o importa por enquanto, antes de   ||\n");
	printf("\t||     qualquer coisa preciso comer algo.       ||\n");
	printf("\t||                                              ||\n");
	printf("\t|| Se aproximando da suposta comida percebe-se  ||\n");
	printf("\t|| um ruido, semelhante a um chocalho, mas antes||\n");
	printf("\t|| de poder ter qualquer rea��o a suposta fruta ||\n");
	printf("\t|| se mostra ser uma sepente de chifres, chamada||\n");
	printf("\t||  de Cerastes, que tenta dar uma bote direto  ||\n");
	printf("\t||    no pesco�o de Zagreu, que por reflexo     ||\n");
	printf("\t||     consegue colocar o bra�o na frente.      ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	tutorial();
	 }	
	 
	void tutorial()
	{
	
 	system("cls");
 	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t|| Com a serpente agarrada em seu bra�o, Zagreu ||\n");
	printf("\t||      se v� em uma situa��o complicada...     ||\n");
	printf("\t||   1- Tentar se desvincular da serpente,      ||\n");
	printf("\t||               arremassando-a.                ||\n");
	printf("\t||   2-Agarrar a serpente com o outro bra�o,    ||\n");
	printf("\t||       tentando imobilizar a mandibula.       ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
	switch(getch())
 	 {
 	 		case '1':
 	 			system("cls");
				life = life - 10;
 				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t|| Com a serpente agarrada em seu bra�o, Zagreu ||\n");
				printf("\t||      se v� em uma situa��o complicada...     ||\n");
				printf("\t||   1- Tentar se desvincular da serpente,      ||\n");
				printf("\t||               arremassando-a.                ||\n");
				printf("\t||   2-Agarrar a serpente com o outro bra�o,    ||\n");
				printf("\t||       tentando imobilizar a mandibula.       ||\n");
				printf("\t||                                              ||\n");
				printf("\t|| Ao tentar arremessa-la, as presas da serpente||\n");
				printf("\t||  abrem um corte no bra�o de zagreu,          ||\n");
				printf("\t|| arremessando a cerastes � cerca de 8 metros. ||\n");
				printf("\t||       Zagreu perde 10 pontos de vida.        ||\n");
				printf("\t||          A sua vida � de %d/100.             ||\n", life);
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
				getch();
 	 			break;
 	 		
 	 		case '2':
 	 			system("cls");
 				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t|| Com a serpente agarrada em seu bra�o, Zagreu ||\n");
				printf("\t||      se v� em uma situa��o complicada...     ||\n");
				printf("\t||   1- Tentar se desvincular da serpente,      ||\n");
				printf("\t||               arremassando-a.                ||\n");
				printf("\t||   2-Agarrar a serpente com o outro bra�o,    ||\n");
				printf("\t||       tentando imobilizar a mandibula.       ||\n");
				printf("\t||   Zagreu segura a cabe�a da cerastes pela    ||\n");
				printf("\t||  mandibula com for�a, fazendo-a perder a     ||\n");
				printf("\t||  for�a, assim conseguindo retirar as presas  ||\n");
				printf("\t||      de seu bra�o sem mais ferimentos.       ||\n");
				printf("\t||           Zagreu n�o levou danos             ||\n");
				printf("\t||           A sua vida � de %d/100            ||\n ", life);
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				break;
 				
 			default:
 				tutorial();
	  }
	  transition();
	  }
	  
	void transition()
	{
	system("cls");
 	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");	
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||      Ap�s a batalha Zagreu recobrou sua      ||\n");
	printf("\t|| consciencia, o por que de estar naquele lugar||\n");
	printf("\t||      e o mais importante, seu objetivo.      ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
 	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");	
	printf("\t|| Tudo come�ou quando meu pai, se � que posso  ||\n");
	printf("\t|| chamar assim, enganou minha m�e e teve uma   ||\n");
	printf("\t|| rela��o for�ada, a deixando para sofrer as   ||\n");
	printf("\t||  consequ�ncias de tal ato, Zeus sabia que ela||\n");
	printf("\t||  era casada com Hades e sabia tamb�m que ele ||\n");
	printf("\t|| n�o perdoaria f�cil aquela trai��o, e mesmo  ||\n");
	printf("\t||        assim ele a deixou para sofrer.       ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||    Quando nasci fui abandonado para viver    ||\n");
	printf("\t||    sozinho no t�rtaro, e desde ent�o tenho   ||\n");
	printf("\t||  vivido nesse lugar miser�vel.  Apesar disso ||\n");
	printf("\t||    n�o sinto raiva de minha m�e, Hades n�o   ||\n");
	printf("\t|| permitiria que um fruto de uma trai��o como  ||\n");
	printf("\t|| eu permanecesse com ela, ainda amo minha m�e ||\n");
	printf("\t|| e desejo que um dia possamos ser uma fam�lia.||\n");
	printf("\t||  Portanto estou determinado a derrotar Zeus  ||\n");
	printf("\t|| e me vingar de tudo o que ele nos fez passar,||\n");
	printf("\t||          farei isso custe o que custar.      ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n ");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t|| Sempre pensei em como me vingaria, mas um dia||\n");
	printf("\t||  tomei uma atitude, sair do t�rtaro, e subir ||\n");
	printf("\t||   at� o olimpo e assim matar o causador da   ||\n");
	printf("\t||  minha desgra�a. Assim que entrei no templo, ||\n");
	printf("\t||    descobri que n�o tinha nenhum Deus ali,   ||\n");
	printf("\t|| a �nica coisa que percebi foi o Raio de Zeus,||\n");
	printf("\t||    protegido por um compartimento de vidro,  ||\n");
	printf("\t||     quando eu vi aquela poderosa arma, sem   ||\n");
	printf("\t|| nenhuma defesa, eu logo decido roubar o raio,||\n");
	printf("\t||  e espreitar dentro do hall, esperar toda a  ||\n");
	printf("\t||  balburdia que isso poderia causar e assim   ||\n");
	printf("\t||      matar todos os Deuses de uma vez.       ||\n ");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t|| Com todo aquele poder correndo em minha m�o, ||\n");
	printf("\t|| eu fiquei espantado, e n�o me contive, assim ||\n");
	printf("\t|| que os deuses come�aram a abrir a porta, eu  ||\n");
	printf("\t||  me joguei na frente e apontei o raio para a ||\n");
	printf("\t|| mesma, e quando eles abriram, eu finalmente  ||\n");
	printf("\t||    vi, um deus em sua verdadeira forma, eu   ||\n");
	printf("\t||  fiquei estupefacto com tanto resplendor, e  ||\n");
	printf("\t||                 paralisei...                 ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n ");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||  Assim que Zeus me viu paralisado, ele como  ||\n");
	printf("\t|| um verdadeiro Deus dos raios, apareceu ao meu||\n");
	printf("\t|| lado, com uma estrondosa velocidade, e pegou ||\n");
	printf("\t||   o raio de minha m�o, e antes de tudo oque  ||\n");
	printf("\t||    poderia acontecer se eu falasse algo, me  ||\n");
	printf("\t||   atordoou e com uma ordem vinda de Hera, os ||\n");
	printf("\t||    tit�s foram ordenados a me jogar no mais  ||\n");
	printf("\t||              profundo t�rtaro.               ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n ");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	
	  system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||    L� fico desacordado por dias, e quando    ||\n");
	printf("\t||   acordo, percebo algo estranho, eu estava   ||\n");
	printf("\t||   conversando com Hera, e agora estava no    ||\n");
	printf("\t||      t�rtaro, o lugar que mais odiava.       ||\n");
	printf("\t|| Por�m, dessa vez, eu n�o conhecia este lugar ||\n");
	printf("\t||   do t�rtaro, era mais profundo, e cheio de  ||\n");
	printf("\t||   perigos, eu sabia que n�o estava l� para   ||\n");
	printf("\t||                 brincadeiras.                ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n ");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t|| Depois dessa batalha Zagreu, que estava muito||\n");
	printf("\t|| cansado, sentou-se e planejou tudo o que ele ||\n");
	printf("\t||                teria de fazer:               ||\n");
	printf("\t||     \"""J� est� na hora de dar um fim           ||\n ");
	printf("\t||        a essa era de Deuses sujos...\"""        ||\n");
	printf("\t||   N�o sabendo onde estava Zagreu come�ou a   ||\n");
	printf("\t|| caminhar, e encontrou escondido numa parede  ||\n");
	printf("\t|| uma po��o de apar�ncia sublime e aparentando ||\n");
	printf("\t||  acabar de ter sido colocada ali, ele n�o a  ||\n");
	printf("\t|| tomou, ele a guardou, pois, de certa forma,  ||\n");
	printf("\t||   uma po��o encontrada desta forma, era      ||\n");
	printf("\t||              um tanto supeita.               ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||  Poucos passos depois, Zagreu encontra outra ||\n");
	printf("\t|| cerastes, por�m essa estava em sua verdadeira||\n");
	printf("\t||      forma, assim apenas atacando-o...       ||\n");
	printf("\t||                                              ||\n ");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
	cerastes++;
	battle_screen();
	 } 
	  
	  
	void step1()
	{
	
 	system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t|| Zagreu, se sentiu extremamente cansado depois||\n");
	printf("\t|| desta batalha, ele n�o tinha armas fortes, e ||\n");
	printf("\t||    esses confrontos contra estas serpentes   ||\n");
	printf("\t||      estavam ficando muito cansativos...     ||\n ");
	printf("\t||    E ent�o como se fosse um fantasma, ele    ||\n");
	printf("\t|| encontra Tif�o, o terr�vel monstro que tinha ||\n");
	printf("\t|| acabado de nascer, por�m s�bio desde sempre, ||\n");
	printf("\t|| Tif�o j� sabia de seu destino, destruir todos||\n");
	printf("\t|| os deuses, e viu em Zagreu, um semi deus, com||\n");
	printf("\t|| habilidades incompreendidas, o seu primeiro  ||\n");
	printf("\t||            passo para esse destino.          ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||   Tif�o cedeu ajuda a Zagreu, disse que n�o  ||\n");
	printf("\t||       havia porque teme-lo, e que se ele     ||\n");
	printf("\t||    demonstrasse as verdadeiras habilidades   ||\n");
	printf("\t|| necess�rias, ele iria ceder a arma para matar||\n ");
	printf("\t||  qualquer deus que ele quisesse, por�m como  ||\n");
	printf("\t||   Zagreu n�o tinha arma nenhuma, Tif�o, em   ||\n");
	printf("\t|| um gesto nobre, entregou uma de suas garras, ||\n");
	printf("\t||       para Zagreu usar como arma...          ||\n");
	printf("\t|| E Tif�o tamb�m relatou que todas as po��es de||\n");
	printf("\t|| apar�ncia sublime e quentes foram o pr�prio  ||\n");
	printf("\t|| que as escondeu para ajudar Zagreu nas suas  ||\n");
	printf("\t||                 batalhas...                  ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t|| Falando para Zagreu  beber da po��o, Zagreu, ||\n");
	printf("\t||     um tanto receoso bebeu , e se sentiu     ||\n");
	printf("\t||  revigorado, como se estivesse ficado mais   ||\n");
	printf("\t||                   forte.                     ||\n ");
	printf("\t||                                              ||\n");
	printf("\t|| E foi assim que Zagreu conseguiu sua arma, a ||\n");
	printf("\t||              Garra de Tif�o.                 ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n ");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||   Continuando sua jornada, Zagreu acaba se   ||\n");
	printf("\t||      deparando com mais uma Cerastes.        ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
		potion = 3;
		attack = attack + 15;
		cerastes++;
		battle_screen();
	}
	
	void step2()
	{
		life = life + 50;
		defense = defense + 10;
		system("cls");
	  printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||   Logo depois dessa batalha, parecia que o   ||\n");
	printf("\t|| caminho ficou muito mais claro � sua frente, ||\n ");
	printf("\t|| ele seguiu todas as instru��es passadas pelo ||\n");
	printf("\t|| tif�o, seu mais novo aliado, parecia que tudo||\n");
	printf("\t||   fazia mais sentido, e seu caminho estava   ||\n");
	printf("\t||            predestinado por ele.             ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||    Zagreu segue seu caminho e vai para uma   ||\n");
	printf("\t|| floresta, ele teria que estar sempre atento, ||\n");
	printf("\t||    pois a qualquer momento ele poderia ser   ||\n");
	printf("\t||    atacado, ele continua caminhando at� que  ||\n");
	printf("\t||  encontra uma cachoeira e decide parar para  ||\n ");
	printf("\t||  saciar sua sede, quando ele se abaixar para ||\n");
	printf("\t|| ent�o beber da �gua ele v� atrav�s do reflexo||\n");
	printf("\t|| uma mulher, surpreendendo-se com sua beleza. ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t|| Ela ent�o se apresenta prontamente, revelando||\n");
	printf("\t||   ser uma ninfa que vivia nos bosques, al�m  ||\n");
	printf("\t||  disso acaba confessando que sabia de toda a ||\n");
	printf("\t||     hist�ria dele e que o ajudaria em sua    ||\n");
	printf("\t||  caminhada, ela ent�o deu a ele a armadura   ||\n ");
	printf("\t||          impenetr�vel de Aquiles.            ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	
 	system("cls");
	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||   Zagreu ent�o agradece pelos presentes e    ||\n");
	printf("\t||  pergunta o porqu� dela lhe ajudar, ela diz  ||\n");
	printf("\t||  ent�o que na verdade ela � filha de Zeus e  ||\n");
	printf("\t||     que o mesmo havia matado sua m�e.        ||\n");
	printf("\t||                                              ||\n ");
	printf("\t||  Ele segue ent�o seu caminho, determinado a  ||\n");
	printf("\t||    cumprir aquilo que acreditava ser seu     ||\n");
	printf("\t||                 destino...                   ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 	getch();
 	branch();
 		}
 	
 	void branch()
 	{
	 
 	system("cls");
	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t|| Ap�s sair do bosque, ele encontra um caminho ||\n");
	printf("\t|| que se dividia, e se viu confuso, em um dos  ||\n");
	printf("\t||   caminhos estava bem esburacado, cheio de   ||\n");
	printf("\t|| �rvores queimadas e pareciam estar mordidas, ||\n");
	printf("\t|| e em outro havia uma grande montanha com uma ||\n ");
	printf("\t||                pequena caverna.              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                   Escolha:                   ||\n");
	printf("\t||                                              ||\n");
	printf("\t||  1) Floresta                                 ||\n");
	printf("\t||  2) Caverna                                  ||\n");
	printf("\t||                                              ||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
 		switch(getch())
		{
			case '1':
				branch2();
				break;
				
			case '2':
				branch3();
				break;
				
			default:
				branch();
				}
		}
		
	void branch2()
	{
		system("cls");
				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t|| Seguindo por este caminho, ele continua vendo||\n");
				printf("\t||   coisas de formas estranhas, e um cheiro    ||\n");
				printf("\t||          muito forte de enxofre...           ||\n");
				printf("\t||                                              ||\n");
				printf("\t|| E de repente um c�o de 3 cabe�as surge, dando||\n ");
				printf("\t||    um golpe, que por puro reflexo, Zagreu    ||\n");
				printf("\t||             consegue desviar...              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
				cerberus++;
				battle_screen();
	}
	
	void branch3()
	{
		system("cls");
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t|| Neste caminho, calmo, e um pouco inquietante,||\n");
		printf("\t||     Zagreu segue sempre atento a todos os    ||\n");
		printf("\t||  movimentos, que possam ocorrer, por�m nada  ||\n");
		printf("\t||  ocorria, parecia que tudo que estava vivo   ||\n");
		printf("\t|| naquele lugar morreu, e s� restou a montanha,||\n");
		printf("\t||  gigantesca, com uma pequena caverna para se ||\n");
		printf("\t||              entrar dentro dela.             ||\n");
		printf("\t|| Por�m, num desvio de olhar, Zagreu observou  ||\n");
		printf("\t|| um p�ssaro, que parecia segui-lo com o olhar.||\n");
		printf("\t||                                              ||\n");
		printf("\t||  1)Seguir o passaro                          ||\n");
		printf("\t||  2)Entrar na montanha                        ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
 		switch(getch())
 		{
 			case '1':
 				branch4();
				break;		
 						
 			case '2':
				 branch6();
				break;
				
			default:
				branch3();
				}
	}
	
	void branch4()
	{
		system("cls");
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t|| Seguindo o p�ssaro, Zagreu encontra uma casa,||\n");
		printf("\t|| que por um acaso, estava com a porta aberta, ||\n");
		printf("\t||  e reduzindo a altitude de seu voo o p�ssaro ||\n");
		printf("\t||                entra na casa.                ||\n");
		printf("\t||                                              ||\n ");
		printf("\t||   Entrar na casa ou voltar para a caverna    ||\n");
		printf("\t||                 na montanha?                 ||\n");
		printf("\t||                                              ||\n");
		printf("\t||   1)Entrar na casa                           ||\n");
		printf("\t||   2)Voltar para a caverna                    ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
 		switch(getch())
 		{
 			case '1':
 				system("cls");
				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||  Entrando na casa Zagreu encontra Zeus, seu  ||\n");
				printf("\t||  pai, sentado em uma cadeira, com a f�ria de ||\n");
				printf("\t||  todos os deuses juntos, estando em posse de ||\n");
				printf("\t||              seu poderoso raio.              ||\n");
				printf("\t||                                              ||\n ");
				printf("\t||     Em um tom s�rio Zeus come�a a falar.     ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				
 				system("cls");
				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||   \"""Voc� � uma esc�ria, para os Deuses, e foi ||\n");
				printf("\t||      um fardo para sua m�e, por isso foi     ||\n");
				printf("\t||  abandonado. Voc� n�o tem lugar nesse mundo, ||\n");
				printf("\t|| desista, voc� nunca me derrotar�, apenas fuja||\n");
				printf("\t||  daqui, se isole, e n�o se intrometa nos meus||\n");
				printf("\t||               assuntos novamente.\"""           ||\n ");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				branch5();
 				break;
 				
 			case '2':
 				system("cls");
				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t|| Zagreu decide voltar para a montanha e entrar||\n");
				printf("\t||                  na caverna.                 ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n ");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				branch6();
 				
 				
 			default:
 				branch4();
 				
		 }
	}
	
	void branch5()
	{
		system("cls");
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||   \"""Ao n�o ser que deseje continuar este      ||\n");
		printf("\t||   embate contra mim, ser morto aqui mesmo,   ||\n");
		printf("\t||    e sabendo que sua m�e ser� a proxima\"""     ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||   1)Fugir                                    ||\n ");
		printf("\t||   2)Lutar                                    ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
 		switch(getch())
 		{
 			case '1':
 				system("cls");
				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||  Zagreu se acovarda e foge, passando o resto ||\n");
				printf("\t|| da vida escondido, arrependendo-se de n�o ter||\n");
				printf("\t||    feito Zeus pagar pelos seus atos, mas     ||\n");
				printf("\t||   aliviado por ter deixado sua m�e de fora   ||\n");
				printf("\t||               deste problema.                ||\n");
				printf("\t||                                              ||\n ");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				end();
 				break;
 				
 			case '2':
 				system("cls");
				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t|| Sem chance de rea��o, Zeus desfere um golpe  ||\n");
				printf("\t||  mortal com seu raio  em Zagreu que cai j�   ||\n");
				printf("\t||  perdendo seus sentidos, mas antes de sua    ||\n");
				printf("\t|| consci�ncia se esvair de vez ele escuta Zeus ||\n");
				printf("\t||       proferir as seguintes palavras:        ||\n");
				printf("\t||                                              ||\n ");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				
 				system("cls");
				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n ");
				printf("\t|| \"""Segundo Hades ele teria juntado for�as com  ||\n");
				printf("\t||  Tif�o para me deter, ele poderia se tornar  ||\n");
				printf("\t||   um grande perigo futuramente com a ajuda   ||\n");
				printf("\t|| dele... nunca imaginei que ele fosse tentar  ||\n");
				printf("\t||        usar de Zagreu para me matar.\"""        ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				lose();
 				break;
 				
 			default:
 				branch5();
		 }
	}
	
	void branch6()
	{
		system("cls");
				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t|| Entrando na caverna, ele s� consegue ir para ||\n");
				printf("\t|| frente, a caverna era extremamente escura e  ||\n");
				printf("\t|| sem vida alguma, e ia ficando cada vez mais  ||\n");
				printf("\t||                  estreita.                   ||\n");
				printf("\t||  Depois de uma longa caminhada, Zagreu acaba ||\n");
				printf("\t||  caindo em um buraco, que levava � um outro  ||\n");
				printf("\t||  local da caverna, este local era um pouco   ||\n");
				printf("\t||   mais claro, sendo iluminado por cristais   ||\n");
				printf("\t||  luminescentes, quando algo gosmento e macio ||\n");
				printf("\t||  afofou a sua queda, olhando para baixo, viu ||\n");
				printf("\t||  uma enorme cabe�a de serpente, e virando o  ||\n");
				printf("\t||          rosto, notou outra cabe�a.          ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				
 				system("cls");
 				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||   Para seguir sua jornada, Zagreu deveria    ||\n");
				printf("\t||               derrotar a Hidra.              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
				hidra++;
				battle_screen();
	}
	
	void branch7()
	{
		system("cls");
 				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||    1)Se aliar � Hades                        ||\n");
				printf("\t||                                              ||\n");
				printf("\t||    2)Matar Hades                             ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				switch(getch())
 				{
 					case '1':
 						system("cls");
 				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||   Zagreu ent�o aceita a proposta de Hades.   ||\n");
				printf("\t||                                              ||\n");
				printf("\t||   Eles fazem um planejamento de invadir o    ||\n");
				printf("\t||    Olimpo, usando das for�as do submundo e   ||\n");
				printf("\t||        assim chegar at� Zeus e mata-lo       ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				
 					system("cls");
 				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t|| Mas ao chegar ao Olimpo, Zagreu percebe que  ||\n");
				printf("\t||   foi enganado. Hades traiu Zagreu, assim    ||\n");
				printf("\t||            entregando-o para Zeus.           ||\n");
				printf("\t||                                              ||\n");
				printf("\t||   Zeus ri de todos os esfor�os perdidos de   ||\n");
				printf("\t||   Zagreu para chegar ao seu destino final,   ||\n");
				printf("\t||     preso, encurralado, sem chances de se    ||\n");
				printf("\t||                  defender.                   ||\n");
				printf("\t||                                              ||\n");
				printf("\t||      Zeus ent�o mata Zagreu sem piedade.     ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				lose();
 						
 				break;
 						
 					case '2':
 				system("cls");
 				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||            Zagreu ent�o responde:            ||\n");
				printf("\t||                                              ||\n");
				printf("\t||       \"""Eu nunca me aliaria com voc�!!        ||\n");
				printf("\t||         Voc� ir� morre aqui e agora!!!\"""      ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 						getch();
						hades++;
						battle_screen();
				 }
		
	}
	
	void step3()
	{
	    system("cls");
 				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t|| Continuando sua jornada ele se depara com um ||\n");
				printf("\t||    pal�cio que estava mais � frente. Esse    ||\n");
				printf("\t||    pal�cio era diferente de tudo o que j�    ||\n");
				printf("\t||   havia visto, ao redor dele tinha um lago   ||\n");
				printf("\t|| onde habitavam as almas que eram destinadas  ||\n");
				printf("\t||              ao castigo eterno.              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				
 				system("cls");
 				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t|| Ele passa sobre a ponte e se sente perturbado||\n");
				printf("\t|| com os gritos de socorro, ent�o ele chega ao ||\n");
				printf("\t|| lugar e abre a porta e l� ele v� Hades em seu||\n");
				printf("\t|| trono e ao lado dele estava a sua amada m�e. ||\n");
				printf("\t||                                              ||\n");
				printf("\t||    Hades ent�o em um tom de ironia diz:      ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				
 				system("cls");
 				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||  \"""Ora Ora quem temos aqui, se n�o � um dos   ||\n");
				printf("\t|| filhos bastardos de Zeus. Fiquei sabendo que ||\n");
				printf("\t|| planeja matar seu pai, at� se aliou a Tif�o  ||\n");
				printf("\t||  para tal. Quero te fazer uma proposta, por  ||\n");
				printf("\t|| que n�o se alia a mim, eu posso te dar tudo  ||\n");
				printf("\t|| o que voc� quiser, incluindo sua vida feliz  ||\n");
				printf("\t||   ao lado de sua m�e e sua vingan�a contra   ||\n");
				printf("\t||                     Zeus.\"""                   ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				branch7();
	
			
	}
	
	void battle_screen()
	{
	
		
	do
	{	
	system("cls");		  
	printf("\t__________________________________________________\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||�                                            �||\n");
	printf("\t||------------\6--------------------\6------------||\n");
	game_battle();
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n");
	printf("\t||                                              ||\n ");
	printf("\t||------------\6--------------------\6------------||\n");
	printf("\t||�                                            �||\n");
	printf("\t||\4                                            \4||\n");
	printf("\t||______________________________________________||\n");
	getch();
	}while(cerastes_life > 0 && life > 0 && cerastes == 1 || hidra_life > 0 && life > 0 && hidra == 1 || cerberus_life > 0 && life > 0 && cerberus == 1|| hades_life > 0 && life > 0 && hades == 1);
	
	if(cerastes == 1 && life > 0)
	{
		cerastes--;
 	
   	 	cerastes_life = 30;
		system("cls");
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||==============================================||\n");
		printf("\t||      -\4-Zagreu derrotou a Cerastes-\4-        ||\n");
		printf("\t||==============================================||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
		getch();
		if(fase == 0)
		{
 		 	fase++;
			step1();
 	 		
 	 	  }	
 		else if(fase == 1)
 		 	step2();
 	 		  
		}
 	 	
 	else if(life > 0 && hidra == 1)
	{
		hidra--;
	
 		system("cls");
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||==============================================||\n");
		printf("\t||        -\4-Zagreu derrotou a Hidra-\4-         ||\n");
		printf("\t||==============================================||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
	    getch();
	    system("cls");
 		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t|| Ap�s derrotar a Hidra Zagreu banha sua garra ||\n");
		printf("\t|| no sangue da mesma, sabendo que seu sangue � ||\n");
		printf("\t||                  � venenoso.                 ||\n");
		printf("\t||   Saindo da caverna Zagreu acaba entrando na ||\n");
		printf("\t||       floresta que ele havia visto antes.    ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
 		getch();
	    attack = attack + 10;
		branch2();
 		
		}
		
	else if(life > 0 && cerberus == 1)
	{
		cerberus--;
	
 		system("cls");
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||==============================================||\n");
		printf("\t||      -\4-Zagreu derrotou o Cerberus-\4-        ||\n");
		printf("\t||==============================================||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
	    getch();
		step3();
 	 
	  	}	
	  	
	else if(life > 0 && hades == 1)
	{
		hades--;
	
		system("cls");
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||==============================================||\n");
		printf("\t||        -\4-Zagreu derrotou o Hades-\4-         ||\n");
		printf("\t||==============================================||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
	    getch();
	    
	    system("cls");
 				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t|| Depois de matar Hades Pers�fone vai at� perto||\n");
				printf("\t||     do corpo e diz as seguintes palavras:    ||\n");
				printf("\t||                                              ||\n");
				printf("\t|| \"""Eu n�o acredito que estou livre, finalmente ||\n");
				printf("\t|| me livrei desse encosto, afinal eu tenho que ||\n");
				printf("\t||     confessar que sempre quis comandar o     ||\n");
				printf("\t||                   submundo.\"""                 ||\n");
				printf("\t||         Zagreu ent�o responde alegre:        ||\n");
				printf("\t||   \"""Finalmente poderemos ficar juntos m�e,    ||\n");
				printf("\t||               como uma familia\"""             ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 					
				system("cls");
				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||   Ela ent�o d� uma risada sarc�stica e diz:  ||\n");
				printf("\t||                                              ||\n");
				printf("\t|| \"""Eu nunca ficaria ao seu lado, n�o gosto de  ||\n");
				printf("\t||  voc�, al�m do mais que voc� foi a causa de  ||\n");
				printf("\t|| Hades me tratar mal desde aquela �poca, voc� ||\n");
				printf("\t||            arruinou a minha vida.\"""           ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				
 				system("cls");
				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||    Ele ficou extremamente abalado com as     ||\n");
				printf("\t|| palavras daquela que ele achava que o amava, ||\n");
				printf("\t|| al�m da tristeza, havia ir� em seu cora��o e ||\n");
				printf("\t||  em um ato irracional ele enfia a l�mina no  ||\n");
				printf("\t|| cora��o de sua m�e, e a segura em seus bra�os||\n");
				printf("\t||    a deixando cair suavemente pelo ch�o.     ||\n");
				printf("\t||   Ele sussurra em seu ouvido mesmo sabendo   ||\n");
				printf("\t||             que ela n�o ouviria:             ||\n");
				printf("\t||                                              ||\n");
				printf("\t||  \"""Eu s� queria uma fam�lia, isso tudo n�o    ||\n");
				printf("\t|| teria acontecido se voc� tivesse me amado.\"""  ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
 				
 					system("cls");
				printf("\t__________________________________________________\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t|| Zagreu ent�o vai at� o trono e l� se assenta ||\n");
				printf("\t|| tomando o posto de novo deus do submundo, mas||\n");
				printf("\t||    ele sabia que agora vinha a parte mais    ||\n");
				printf("\t||               dif�cil, matar Zeus...         ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||                                              ||\n");
				printf("\t||\4                                            \4||\n");
				printf("\t||______________________________________________||\n");
 				getch();
				final = 1;		
				end();
 	 	
 	 
	  	}
 	else if(life == 0)
	{
 	 	lose();
 	 	}
 	 	
 	
 	 
	  	
	
	}
	
	//Todas as batalhas contidas no jogo
	void game_battle()
	{
		// Batalhas contra a Cerastes
		if(cerastes == 1)
		{
		
		
		system_return = randomness_system(1,10);
			if(system_return < 4)
			{
				printf("\t|| A cerastes permenece parada                  ||\n");
				cerastes_attack = 0;
				cerastes_defense = 0;
				}
			else if(system_return > 3 && system_return < 9)
			{
				printf("\t|| A cerastes se prepara para dar o bote        ||\n");
				cerastes_attack = 6;
				cerastes_defense = 0;
				}			
			else if(system_return >= 9)
			{
				printf("\t|| A cerastes se posiciona na defensiva, para um|| \n\t|| melhor contra-ataque                         ||\n");
				cerastes_attack = 10;
				cerastes_defense = 10;
			}
			
		if(fase == 0)			
		printf("\t|| 1- agarra-la e golpea-la contra o ch�o       || \n\t|| 2-Se defende                                 ||\n");
		
		else if(fase == 1)
		printf("\t|| 1- Ataca com a garra de Tif�o                || \n\t|| 2-Se defende                                 ||\n\t|| 3-Usar po��o                                 ||\n\t|| 4-Ataque especial                            ||\n");
		
		switch(getch())
 	 	{
 	 		case '1':
 	 			if(fase == 0)
 	 			printf("\t|| Zagreu faz uma investida com a espada        ||\n");
 	 			else if(fase == 1)
 	 			printf("\t|| Zagreu avan�a para acertar um golpe com a    ||\n\t|| garra de Tif�o                               ||\n");
 	 			
 	 			life = life - cerastes_attack;
 	 			cerastes_life = cerastes_life - (attack - cerastes_defense);
				  if(cerastes_life < 0)
 	 			  cerastes_life = 0;
 	 			  if(life < 0)
 	 			  life = 0;
 	 			printf("\t|| Zagreu perde %d pontos de vida               ||\n", cerastes_attack);
 	 			printf("\t|| A sua vida � de %d/100                       ||\n", life);
 	 			printf("\t|| A cerastes recebeu %d de dano                ||\n", attack - cerastes_defense);
 	 			printf("\t|| A vida da cerastes � de %d/30                ||\n", cerastes_life);
 	 			printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 			
 	 			 if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
					   
				if(special > 0)
				{
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
 	 			break;
 	 		
 	 		case '2':
 	 			
 	 			if(cerastes_attack >= 10)
 	 			{
				printf("\t|| Zagreu se defende do ataque da cerastes      ||\n");
 	 			life = life - (cerastes_attack - defense);
 	 			if(life < 0)
 	 			  life = 0;
				printf("\t|| Zagreu sofreu %d de dano                     ||\n", cerastes_attack - defense);
				}
				else if(cerastes_attack < 10)
				{
					printf("\t|| Zagreu se defende do ataque da cerastes      ||\n");
				    printf("\t|| Zagreu sofreu 0 de dano                      ||\n");
				}
 	 			printf("\t|| A sua vida � de %d/100                       ||\n", life);
 	 			printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 			
 	 			 if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
					   
				if(special > 0)
				{
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
 	 			break;
 	 			
 	 		case '3':
 	 			
 	 			if(fase != 0)
 	 			{
				  
 	 			if(potion > 0)
 	 			{
				  
 	 			if(potion_effect == 0)
 	 			{
 	 				printf("\t|| Zagreu toma um frasco de po��o               ||\n");
				  	life = life + 20;
 	 				
 	 				if(life < 0)
 	 			  		life = 0;
 	 				if(life > 150)
 	 					life = 150;
 	 				
 	 				attack = attack + 10;
 	 				defense = defense + 10;
 	 				potion--;
 	 				potion_effect = 3;
 	 				printf("\t|| Zagreu regenera 20 pontos de vida            ||\n");
 	 				printf("\t|| O ataque de Zagreu sobe para %d              ||\n", attack);
 	 				printf("\t|| A defesa de Zagreu sobe para %d              ||\n", defense);
 	 				if(cerastes_attack > 0)
 	 				{
					  	life = life - hidra_attack;
 	 					printf("\t|| Zagreu sofreu %d de dano                     ||\n", cerastes_attack);
						  }
 	 					
 	 				printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 				printf("\t|| A vida da Cerastes � de %d/75                ||\n", cerastes_life);
 	 				printf("\t||                                              ||\n");
 	 				printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 				if(potion_effect > 0)
 	 			 {
 	 			 	if(potion_effect != 3)
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
					  }
					  
					  }
					  
					  
				if(special > 0)
				{
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
					}
					
				break;
 	 		case '4':
					
				if(fase != 0)
				{
				
				if(special == 0)
				{
				
				cerastes_life = cerastes_life - (attack * 3 / 2);
				printf("\t|| Ataque especial de Zagreu tira %d de dano    ||\n", attack * 3 / 2);
				printf("\t|| A Hidra recebeu %d de dano                   ||\n", (attack * 3 / 2) - cerastes_defense);
				special = 5;
				}
				if(cerastes_attack > 0)
				{
				life = life - cerastes_attack;
				printf("\t|| Zagreu perde %d pontos de vida               ||\n", cerastes_attack);
				}
				
				if(cerastes_life < 0)
 	 			  cerastes_life = 0;
 	 			 if(life < 0)
 	 			  life = 0;
 	 			printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 			
 	 			printf("\t|| A vida da Cerastes � de %d/75                ||\n", cerastes_life);
				printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
				if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
				if(special > 0)
				{
					if(special != 5)
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
					}
				
				break;
 	 		default:
 	 			battle_screen();
 	 			break;
 	 			
 	 	if(potion_effect == 0)
	    	{
	    		attack = 30;
	    		defense = 20;
			}
 	 	}
		  				
	  }
	  
	  //Batalha contra a Hidra
	  else if(hidra == 1)
	  {
	  
	    	system_return = randomness_system(1,20);
			if(system_return <= 5)
			{
				printf("\t|| A hidra se destrai enquanto planeja seu      ||\n\t|| proximo movimento                            ||\n");
				hidra_attack = 0;
				hidra_defense = 0;
				}
			else if(system_return > 5 && system_return <=15)
			{
				printf("\t|| A hidra se prepara para disparar um veneno   ||\n\t|| nocivo                                       ||\n");
				hidra_attack = 15;
				hidra_defense = 0;
				}			
			else if(system_return > 15 && system_return < 19)
			{
				printf("\t|| A hidra se protege enquanto regenera 20      ||\n\t|| pontos de vida                               ||\n");
				hidra_life = hidra_life + 20;
				hidra_attack = 0;
				hidra_defense = 15;
				
			}
			else if(system_return > 18)
			{
				printf("\t|| A hidra te cerca com suas cabe�as            ||\n");
				hidra_attack = 25;
				hidra_defense = 0;
			}
			
	    	printf("\t|| 1- Ataca com a garra de Tif�o                || \n\t|| 2-Se defende                                 ||\n\t|| 3-Usar po��o                                 ||\n\t|| 4-Ataque especial                            ||\n");
	    	
	    	if(potion_effect == 0)
	    	{
	    		attack = 40;
	    		defense = 10;
			}
	  	
	  	switch(getch())
 	 {
 	 		case '1':
 	 			printf("\t|| Zagreu avan�a para acertar um golpe com a    ||\n\t|| garra de Tif�o                               ||\n");
 	 			life = life - hidra_attack;
				if(hidra_life > 75)
				hidra_life = 75;
 	 			hidra_life = hidra_life - (attack - hidra_defense);
 	 			 if(hidra_life < 0)
 	 			  hidra_life = 0;
 	 			 if(life < 0)
 	 			  life = 0;
					
				
 	 			printf("\t|| Zagreu perde %d pontos de vida               ||\n", hidra_attack);
 	 			printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 			printf("\t|| A Hidra recebeu %d de dano                   ||\n", attack - hidra_defense);
 	 			printf("\t|| A vida da Hidra � de %d/75                   ||\n", hidra_life);
 	 			printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 			
 	 			 if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
					   
				if(special > 0)
				{
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
					   
 	 			break;
 	 		
 	 		case '2':
				if(hidra_life > 75)
					hidra_life = 75;
 	 			if(hidra_attack > 0)
 	 			{
				printf("\t|| Zagreu se defende do ataque da hidra         ||\n");
 	 			
 	 			if(life < 0)
 	 			  life = 0;
 	 			
				if(hidra_attack >= defense)
				{
				printf("\t|| Zagreu sofreu %d de dano                     ||\n", hidra_attack - defense);
				life = life - (hidra_attack - defense);
				}
				else
				printf("\t|| Zagreu sofreu 0 de dano                      ||\n");
				
				}
 	 			printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 			printf("\t|| A vida da Hidra � de %d/75                   ||\n", hidra_life);
 	 			printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 			
 	 			 if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
				
				if(special > 0)
				{
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
 	 			break;
 	 			
 	 			
 	 		case '3':
 	 			if(hidra_life > 75)
					hidra_life = 75;
 	 			if(potion > 0)
 	 			{
				  
 	 			if(potion_effect == 0)
 	 			{
 	 				printf("\t|| Zagreu toma um frasco de po��o               ||\n");
				  	life = life + 20;
 	 				
 	 				if(life < 0)
 	 			  		life = 0;
 	 				if(life > 150)
 	 					life = 150;
 	 				
 	 				attack = attack + 10;
 	 				defense = defense + 10;
 	 				potion--;
 	 				potion_effect = 3;
 	 				printf("\t|| Zagreu regenera 20 pontos de vida            ||\n");
 	 				printf("\t|| O ataque de Zagreu sobe para %d              ||\n", attack);
 	 				printf("\t|| A defesa de Zagreu sobe para %d              ||\n", defense);
 	 				if(hidra_attack > 0)
 	 				{
					  	life = life - hidra_attack;
 	 					printf("\t|| Zagreu sofreu %d de dano                     ||\n", hidra_attack);
						  }
 	 					
 	 				printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 				printf("\t|| A vida da Hidra � de %d/75                   ||\n", hidra_life);
 	 				printf("\t||                                              ||\n");
 	 				printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 				if(potion_effect > 0)
 	 			 {
 	 			 	if(potion_effect != 3)
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
					  }
					  
					  }
					  
				if(special > 0)
				{
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
					
				break;
 	 		case '4':
 	 			if(hidra_life > 75)
					hidra_life = 75;
					
				if(special == 0)
				{
				
				hidra_life = hidra_life - (attack * 3 / 2);
				printf("\t|| Ataque especial de Zagreu tira %d de dano    ||\n", attack * 3 / 2);
				printf("\t|| A Hidra recebeu %d de dano                   ||\n", (attack * 3 / 2) - hidra_defense);
				special = 5;
				}
				if(hidra_attack > 0)
				{
				life = life - hidra_attack;
				printf("\t|| Zagreu perde %d pontos de vida               ||\n", hidra_attack);
				}
				
				if(hidra_life < 0)
 	 			  hidra_life = 0;
 	 			 if(life < 0)
 	 			  life = 0;
 	 			printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 			
 	 			printf("\t|| A vida da Hidra � de %d/75                   ||\n", hidra_life);
				printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
				if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
				if(special > 0)
				{
					if(special != 5)
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
				
				break;
 	 		default:
 	 			battle_screen();
 	 			break;
 	 			
 	 	if(potion_effect == 0)
	    	{
	    		attack = 30;
	    		defense = 20;
			}
 	 	}
	 }
 	 	
 	 	//Batalha contra o Cerberus
		else if(cerberus == 1)
	  {
	  
	    	system_return = randomness_system(1,20);
			if(system_return <= 4)
			{
				printf("\t|| O Cerberus baixa a guarda por um momento     ||\n");
				cerberus_attack = 0;
				cerberus_defense = 0;
				}
			else if(system_return > 4 && system_return <=13)
			{
				printf("\t|| O Cerberus cospe uma bola de fogo            ||\n");
				cerberus_attack = 18;
				cerberus_defense = 0;
				}			
			else if(system_return > 13 && system_return < 18)
			{
				printf("\t|| O Ceberus se posiciona na defensiva          ||\n");
				cerberus_attack = 0;
				cerberus_defense = 15;
			}
			else if(system_return > 17)
			{
				printf("\t|| O Ceberus avan�a enfurecido, para cravar suas||\n\t|| presas em Zagreu                             ||\n");
				cerberus_attack = 30;
				cerberus_defense = 0;
			}
			
	   		printf("\t|| 1- Ataca com a garra de Tif�o                 || \n\t|| 2-Se defende                                 ||\n\t|| 3-Usar po��o                                 ||\n\t|| 4-Ataque especial                            ||\n");
	  	
	  	switch(getch())
 	 {
 	 		case '1':
 	 			printf("\t|| Zagreu avan�a para acertar um golpe com a    ||\n\t|| garra de Tif�o                               ||\n");
 	 			life = life - cerberus_attack;
 	 			cerberus_life = cerberus_life - (attack - cerberus_defense);
 	 			 if(cerberus_life < 0)
 	 			  cerberus_life = 0;
 	 			 if(life < 0)
 	 			  life = 0;
 	 			printf("\t|| Zagreu perde %d pontos de vida               ||\n", cerberus_attack);
 	 			printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 			printf("\t|| O Cerberus recebeu %d de dano                ||\n", attack - cerberus_defense);
 	 			printf("\t|| A vida da Cerberus � de %d/75                ||\n", cerberus_life);
 	 			printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 			
 	 			 if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
				
				if(special > 0)
				{
					if(special != 5)
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
 	 			break;
 	 		
 	 		case '2':
 	 			if(cerberus_attack == 18)
 	 			{
				printf("\t|| Zagreu se defende do fogo de Cerberus        ||\n");
				
 	 			
 	 			if(life < 0)
 	 			  life = 0;
 	 			  
 	 			if(cerberus_attack >= defense)
 	 			{
				printf("\t|| Zagreu sofreu %d de dano                     ||\n", cerberus_attack - defense);
				life = life - (cerberus_attack - defense);
				}
				
				else
				printf("\t|| Zagreu sofreu 0 de dano                      ||\n");
				
				}
				if(cerberus_attack == 30)
					{
				printf("\t|| Zagreu se defende do ataque de Cerberus      ||\n");
 	 			
 	 			if(life < 0)
 	 			  life = 0;
				if(cerberus_attack >= defense)
				{
				printf("\t|| Zagreu sofreu %d de dano                     ||\n", cerberus_attack - defense);
				life = life - (cerberus_attack - defense);
				}
				
				else
				printf("\t|| Zagreu sofreu 0 de dano                      ||\n");
				}
				
 	 			printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 			printf("\t|| A vida da Cerberus � de %d/75                ||\n", cerberus_life);
 	 			printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 			
 	 			 if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
				if(special > 0)
				{
					if(special != 5)
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
 	 			break;
 	 			
 	 		case '3':
 	 			if(cerberus_life > 75)
					cerberus_life = 75;
 	 			if(potion > 0)
 	 			{
				  
 	 			if(potion_effect == 0)
 	 			{
 	 				life = life + 20;
 	 				if(life < 0)
 	 			  		life = 0;
 	 				if(life > 150)
 	 					life = 150;
 	 				
 	 				attack = attack + 10;
 	 				defense = defense + 10;
 	 				potion--;
 	 				potion_effect = 3;
 	 				printf("\t|| Zagreu regenera 20 pontos de vida            ||\n");
 	 				printf("\t|| O ataque de Zagreu sobe para %d              ||\n", attack);
 	 				printf("\t|| A defesa de Zagreu sobe para %d              ||\n", defense);
 	 				if(cerberus_attack > 0)
 	 				{
 	 					life = life - cerberus_attack;
 	 					printf("\t|| Zagreu sofreu %d de dano                     ||\n", cerberus_attack);
						  }
 	 					
 	 				printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 				printf("\t|| A vida da Cerberus � de %d/75                ||\n", cerberus_life);
 	 				printf("\t||                                              ||\n");
 	 				printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 				if(potion_effect > 0)
 	 			 {
 	 			 	if(potion_effect != 3)
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
					  }
				if(special > 0)
				{
					if(special != 5)
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
					  
					  }
				break;
 	 		case '4':
 	 			if(cerberus_life > 75)
					cerberus_life = 75;
				if(special == 0)
				{
				
				cerberus_life = cerberus_life - (attack * 3 / 2);
				printf("\t|| Ataque especial de Zagreu tira %d de dano    ||\n", attack * 3 / 2);
				printf("\t|| O Cerberus recebeu %d de dano                ||\n", (attack * 3 / 2) - cerberus_defense);
				special = 5;
				}
				if(cerberus_life < 0)
 	 			  cerberus_life = 0;
 	 			 if(life < 0)
 	 			  life = 0;
 	 			if(cerberus_attack > 0)
 	 			{
				  life = life - cerberus_attack;
				printf("\t|| Zagreu perde %d pontos de vida               ||\n", cerberus_attack);
				}
 	 			printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 			printf("\t|| A vida da Cerberus � de %d/75                ||\n", cerberus_life);
				printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
				if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
				if(special > 0)
				{
					if(special != 5)
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
				
				break;
 	 			
 	 		default:
 	 			battle_screen();
 	 			break;
 	 			
 	 	if(potion_effect == 0)
	    	{
	    		if(hidra_life != 0)
	    		{
	    		attack = 30;
	    		defense = 20;
				}
				else
				{
					attack = 40;
	    			defense = 20;
				}
			}
 	 	}  
	 }
 	 	
 	 	//Batalha contra Hades
		else if(hades == 1)
	  {
	  
	    	system_return = randomness_system(1,20);
			if(system_return <= 3)
			{
				printf("\t|| Hades se descuida e proporciona uma abertura ||\n\t|| em sua defesa                                ||\n");
				hades_attack = 0;
				hades_defense = 0;
				}
			else if(system_return > 3 && system_return <=15)
			{
				printf("\t|| Hades arremessa sua lan�a                    ||\n");
				hades_attack = 20;
				hades_defense = 0;
				}			
			else if(system_return > 15 && system_return < 19)
			{
				printf("\t|| Hades faz uma investida com sua lan�a        ||\n");
				hades_attack = 30;
				hades_defense = 0;
				
			}
			else if(system_return > 17 && system_return < 20)
			{
				printf("\t|| Hades fica invisivel utilizando de seu       ||\n\t||capacete                                      ||\n ");
				hades_attack = 0;
				hades_defense = 50;
			}
			
			else if(system_return > 19)
			{
				printf("\t|| Hades invoca almas perdidas para atacar e    ||\n\t||  absorver a vida de Zagreu                   ||\n");
				hades_life = hades_life + (life * 1 / 3);
				hades_attack = 50;
				hades_defense = 0;
			
			}
			
	   		printf("\t|| 1- Ataca com a garra de Tif�o                 || \n\t|| 2-Se defende                                 ||\n\t|| 3-Usar po��o                                 ||\n\t|| 4-Ataque especial                            ||\n");
	  	
	  	switch(getch())
 	 {
 	 		case '1':
 	 			printf("\t|| Zagreu avan�a para acertar um golpe com a    ||\n\t|| garra de Tif�o                               ||\n");
 	 			life = life - hades_attack;
 	 			if(hades_life > 100)
 	 			  hades_life = 100;
 	 			
 	 			 if(hades_life < 0)
 	 			  hades_life = 0;
 	 			 if(life < 0)
 	 			  life = 0;
 	 			printf("\t|| Zagreu perde %d pontos de vida               ||\n", hades_attack);
 	 			printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 			if(hades_defense == 50)
 	 			printf("\t|| Hades recebeu 0 de dano                      ||\n");
 	 			else
 	 			{
 	 			printf("\t|| Hades recebeu %d de dano                     ||\n", attack - hades_defense);
				  hades_life = hades_life - (attack - hades_defense);
				  }
 	 			if(hades_attack == 50)
 	 				printf("\t|| Hades recupera %d pontos de vida              ||\n", (life * 1 / 3));
 	 			printf("\t|| A vida de Hades � de %d/100                  ||\n", hades_life);
 	 			printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 			
 	 			 if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
				
				if(special > 0)
				{
					if(special != 5)
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
 	 			break;
 	 		
 	 		case '2':
 	 			if(hades_life > 100)
 	 			  hades_life = 100;
 	 			if(hades_attack > 0)
 	 			{
				printf("\t|| Zagreu se defende do ataque de hades         ||\n");
				if(hades_attack >= defense)
				{
 	 				life = life - (hades_attack - defense);
					printf("\t|| Zagreu sofreu %d de dano                     ||\n", hades_attack - defense);
					}
					
				else 
				printf("\t|| Zagreu sofreu 0 de dano                      ||\n");
 	 			if(life < 0)
 	 			  life = 0;
				
				}
 	 			printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 			if(hades_attack == 50)
 	 				printf("\t|| Hades recupera %d pontos de vida             ||", (life * 1 / 3));
 	 			printf("\t|| A vida da Hades � de %d/100                  ||\n", hades_life);
 	 			printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 			
 	 			 if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
				if(special > 0)
				{
					if(special != 5)
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
 	 			break;
 	 			
 	 		case '3':
 	 			if(hades_life > 100)
					hades_life = 100;
 	 			if(potion > 0)
 	 			{
				  
 	 			if(potion_effect == 0)
 	 			{
 	 				life = life + 20;
 	 				if(life < 0)
 	 			  		life = 0;
 	 				if(life > 150)
 	 					life = 150;
 	 				
 	 				attack = attack + 10;
 	 				defense = defense + 10;
 	 				potion--;
 	 				potion_effect = 3;
 	 				printf("\t|| Zagreu regenera 20 pontos de vida            ||\n");
 	 				printf("\t|| O ataque de Zagreu sobe para %d              ||\n", attack);
 	 				printf("\t|| A defesa de Zagreu sobe para %d              ||\n", defense);
 	 				if(hades_attack > 0)
 	 				{
 	 					life = life - hades_attack;
 	 					printf("\t|| Zagreu sofreu %d de dano                     ||\n", hades_attack);
						  }
 	 					
 	 				printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 				if(hades_attack == 50)
 	 				printf("\t|| Hades recupera %d pontos de vida             ||", (life * 1 / 3));
 	 				printf("\t|| A vida da Hades � de %d/75                   ||\n", hades_life);
 	 				printf("\t||                                              ||\n");
 	 				printf("\t||                          Zagreu tem %d po��es ||\n", potion);
 	 				if(potion_effect > 0)
 	 				 {
 	 				 	if(potion_effect != 3)
				   			potion_effect--;
 	 					printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
					  }
					if(special > 0)
				{
					if(special != 5)
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
					  
					  }
				break;
 	 		case '4':
 	 			if(hades_life > 100)
					hades_life = 100;
				if(special == 0)
				{
				
				
				printf("\t|| Ataque especial de Zagreu tira %d de dano    ||\n", attack * 3 / 2);
				if(hades_defense >= (attack * 3 / 2))
 	 			printf("\t|| Hades recebeu 0 de dano                      ||\n");
 	 			else
 	 			{
 	 			printf("\t|| Hades recebeu %d de dano                     ||\n", (attack * 3 / 2) - hades_defense);
				 hades_life = hades_life - (attack * 3 / 2);
				 }
				special = 5;
				}
				if(hades_life < 0)
 	 			  hades_life = 0;
 	 			 if(life < 0)
 	 			  life = 0;
 	 			  
 	 			if(hades_attack > 0)
 	 			{
				  life = life - hades_attack;
				printf("\t|| Zagreu perde %d pontos de vida               ||\n", hades_attack);
				}
 	 			printf("\t|| A sua vida � de %d/150                       ||\n", life);
 	 			if(hades_attack == 50)
 	 				printf("\t|| Hades recupera %d pontos de vida             ||", (life * 1 / 3));
 	 			printf("\t|| A vida da Hades � de %d/100                  ||\n", hades_life);
				printf("\t||                                              ||\n");
 	 			printf("\t||                          Zagreu tem %d po��es ||\n", potion);
				if(potion_effect > 0)
 	 			 {
				   	potion_effect--;
 	 				printf("\t||                    Tempo restante da po��o %d ||\n", potion_effect);
					   }
				if(special > 0)
				{
					if(special != 5)
					special--;
					printf("\t||        Tempo de recarga do ataque especial %d ||\n", special);
					}
				
				break;
 	 			
 	 		default:
 	 			battle_screen();
 	 			break;
 	 			
 	 		if(potion_effect == 0)
	    	{
	    		if(hidra_life != 0)
	    		{
	    		attack = 30;
	    		defense = 20;
				}
				else
				{
					attack = 40;
	    			defense = 20;
 	 				}
		  		}
		 }
	}
	}

	int randomness_system(int min, int max)
	{
	srand(time(NULL));
    int num = (rand() % (max - min + 1)) + min;
    return num;	
	}
	
	void lose()
	{
		system("cls");
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||==============================================||\n");
		printf("\t||             -\4-Zagreu morreu-\4-              ||\n");
		printf("\t||==============================================||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
	    getch();
	    end();
	}
		void end()
	{
		system("cls");
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||==============================================||\n");
		printf("\t||              -\4-Fim de Jogo-\4-               ||\n");
		printf("\t||==============================================||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
	    getch();
	    if(final == 1)
	    {
	    	system("cls");
		printf("\t__________________________________________________\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||                                              ||\n");
		printf("\t||                                              ||\n");
		printf("\t||==============================================||\n");
		printf("\t||     -\4-Continua no proximo semestre...-\4-    ||\n");
		printf("\t||==============================================||\n");
		printf("\t||                                              ||\n");
		printf("\t||\4                                            \4||\n");
		printf("\t||______________________________________________||\n");
	    getch();
		}
	    exit(0);
	}
	


