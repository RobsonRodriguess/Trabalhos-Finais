#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define RED 	"\x1b[31m"
#define GREEN 	"\x1b[32m"
#define RESET	"\x1b[0m"
	


void exibirLogo() {
    printf("	  SSSSSS  PPPPPPPP AAAAAAAA  CCCCCC  EEEEEEE\n");
    printf("	  SS      PP    PP AA    AA  CC      EE\n");
    printf("	  SSSSS   PPPPPPPP AA    AA  CC      EEEEEE\n");
    printf("	     SS   PP       AAAAAAAA  CC      EE\n");
    printf("	 SSSSSS   PP       AA    AA  CCCCCC  EEEEEEE\n");
}

void limpar(){
	system("cls");
}

void cabecalho(){
    printf("              ++++++++++++++++++++++++++++++++++\n");
    printf("              +           Bem vindo a          +\n");
    printf("              +            Space GYM           +\n");
    printf("              ++++++++++++++++++++++++++++++++++\n");
}
void cadastroaluno(){
    printf("              ++++++++++++++++++++++++++++++++++\n");
    printf("              +        Cadastro do aluno       +\n");
    printf("              +            Space GYM           +\n");
    printf("              ++++++++++++++++++++++++++++++++++\n");
}
void cadastroprofessor(){
    printf("              ++++++++++++++++++++++++++++++++++\n");
    printf("              +      Cadastro do Professor     +\n");
    printf("              +            Space GYM           +\n");
    printf("              ++++++++++++++++++++++++++++++++++\n");
}
void cabplanos(){
    printf("              ++++++++++++++++++++++++++++++++++\n");
    printf("              +             Planos             +\n");
    printf("              +            Space GYM           +\n");
    printf("              ++++++++++++++++++++++++++++++++++\n");
}
void cabconvencional(){
    printf("              ++++++++++++++++++++++++++++++++++\n");
    printf("              +       Plano Convencional       +\n");
    printf("              +            Space GYM           +\n");
    printf("              ++++++++++++++++++++++++++++++++++\n");
}
void cabblack(){
    printf("              ++++++++++++++++++++++++++++++++++\n");
    printf("              +           Plano Black          +\n");
    printf("              +            Space GYM           +\n");
    printf("              ++++++++++++++++++++++++++++++++++\n");
}
void cabspace(){
    printf("              ++++++++++++++++++++++++++++++++++\n");
    printf("              +           Plano Space          +\n");
    printf("              +            Space GYM           +\n");
    printf("              ++++++++++++++++++++++++++++++++++\n");
}
void menu(){
    printf("              ++++++++++++++++++++++++++++++++++\n");
    printf("              +          MENU PRINCIPAL        +\n");
    printf("              +            Space GYM           +\n");
    printf("              ++++++++++++++++++++++++++++++++++\n");
}
void parabens(){
    printf("              ++++++++++++++++++++++++++++++++++\n");
    printf("              +    Parab%cns por se Inscrever   +\n", 130);
    printf("              +            Space GYM           +\n");
    printf("              ++++++++++++++++++++++++++++++++++\n");
}
void triste(){
    printf("              ++++++++++++++++++++++++++++++++++\n");
    printf("              +    Esperamos V%c-lo Novamente   +\n", 136);
    printf("              +            Space GYM           +\n");
    printf("              ++++++++++++++++++++++++++++++++++\n");
}

void tabelaicm(){
    printf("              Calcule seu IMC:\n\n");
    printf("------------------------------------------------\n");
    printf("|        IMC        |       CLASSIFICA%C%CO      |\n", 128, 199);
    printf("|----------------------------------------------|\n");
    printf("|Abaixo de 18,5     |      Abaixo do Peso      |\n");
    printf("|----------------------------------------------|\n");
    printf("|Entre 18,6 e 24,9  |        Peso Ideal        |\n");
    printf("|----------------------------------------------|\n");
    printf("|Entre 25,0 e 29,9  | Levemente Acima do Peso  |\n");
    printf("|----------------------------------------------|\n");
    printf("|Entre 30,0 e 34,9  |     Obesidade Grau 1     |\n");
    printf("|----------------------------------------------|\n");
    printf("|Entre 35,0 e 39,9  |Obesidade Grau 2 (Severa) |\n");
    printf("|----------------------------------------------|\n");
    printf("|Acima de 40,0      |Obesidade Grau 3 (M%crbida)|\n", 162);
    printf("------------------------------------------------\n");
}


struct Endereco{
    char rua[50];
    char numero[50];
    char bairro[50];
    char cidade[50];
    char estado[50];
    char cep[50];
};
struct Cadastro{
    char nome[100];
    char cpf[20];
    int dianasc, mesnasc, anonasc;
    char telefone[50];
    char email[50];
    char sexo[5];
    float altura, peso;
    float imc;
    int planoescolhido;
    struct Endereco e;
};
struct Cadastroinstrutor {
    char nome1[100];
    char cpf1[20];
    int dia, mes, ano; 
    char telefone1[50];
    char email1[50];
    char sexo1;
    char formado1[50];
    char experiencia[125];
    struct Endereco e;
};


float imccad(struct Cadastro c){
    
	
    c.imc=c.peso/(c.altura*c.altura);

    printf("\n\nSeu imc %c: %.2f", 130, c.imc);

    if(c.imc<=18.5){
        printf("\nVoc%c est%c abaixo do peso ideal! :(\n\n", 136, 160);
		printf("Procure a nutricionista em nossa academia para te passar a dieta adequada!\n");
		
		printf("Preparamos um treino ideial para voc%c!\n\n", 136);
		sleep (2);
		printf("\t*IMPRIMINDO*\n");
		printf("Siga os treinos: \n");
		sleep (1);
		printf("Aquecimento: 5-10 minutos de cardio leve, como esteira ou bicicleta ergom%ctrica.\n", 130);  
		sleep (1);
		printf("Agachamento com barra: 3-4 s%cries de 8-12 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Supino inclinado com halteres: 3-4 s%cries de 8-12 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Remada com barra: 3-4 s%cries de 8-12 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Desenvolvimento com halteres: 3-4 s%cries de 8-12 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Rosca direta com barra: 3-4 s%cries de 8-12 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Tr%cceps com halteres: 3-4 s%cries de 8-12 repeti%c%ces.\n", 161, 130, 135, 228);
		sleep (1);
		printf("Abdominais: 3-4 s%cries de 12-15 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Recomendamos que voc%c esteja no peso ideia para come%car a introduzir uma luta em seu dia dia\n\n", 136, 135);
		sleep (1);
		printf("Certifique-se de descansar de 1 a 2 minutos entre as s%cries e ajustar a carga de peso de acordo com sua capacidade.\n", 130);
		sleep (1);
		printf("Treinos: Segunda-Feira, Quarta-Feira e Sexta-Feira.\n");
		sleep (1);
		printf("Descanso: Ter%ca-Feira e Quinta-Feira.\n", 135);
		sleep (1);
		printf("Lembre de sempre beber muita %cgua!\n", 133);
		sleep (1);
		printf("\nVamos treinaaar!!\n\n");
		sleep (1);
    }
    else if(c.imc>18.5 && c.imc<=24.9){
        printf("\nVoc%c est%c no peso ideal! :D\n\n", 136, 160);
		printf("Procure a nutricionista em nossa academia para te passar a dieta adequada!\n\n");
		
		printf("Preparamos um treino ideial para voc%c!\n\n", 136);
		sleep (2);
		printf("\t*IMPRIMINDO*\n");
		printf("Siga os treinos: \n");
		sleep (1);
		printf("Aquecimento: 5-10 minutos de cardio leve, como esteira ou bicicleta ergom%ctrica\n", 130);
		sleep (1);
		printf("Agachamento com barra: 3-4 s%cries de 8-12 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Supino com barra: 3-4 s%cries de 8-12 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Remada com barra: 3-4 s%cries de 8-12 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Press de ombros com halteres: 3-4 s%cries de 8-12 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Rosca direta com barra: 3-4 s%cries de 8-12 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Tr%cceps testa com halteres: 3-4 s%cries de 8-12 repeti%c%ces.\n", 161, 130, 135, 228);
		sleep (1);
		printf("Abdominais: 3-4 s%cries de 12-15 repeti%c%ces.\n", 130, 135, 228);
		sleep (1);
		printf("Recomendamos que voc%c fa%ca muay thai!\n\n", 136, 135);
		sleep (1);
		printf("Certifique-se de descansar de 1 a 2 minutos entre as s%cries e ajustar a carga de peso de acordo com sua capacidade.\n", 130);
		sleep (1);
		printf("Treinos: Segunda-Feira, Quarta-Feira e Sexta-Feira.\n");
		sleep (1);
		printf("Descanso: Ter%ca-Feira e Quinta-Feira.\n", 135);
		sleep (1);
		printf("Lembre de sempre beber muita %cgua!\n", 133);
		sleep (1);
		printf("\nVamos treinaaar!!\n\n");
		sleep (1);


    }
    else if(c.imc>24.9 && c.imc<=29.9){
        printf("\nVoc%c est%c levemente acima do peso ideal! :(\n\n", 136, 160);
		printf("Procure a nutricionista em nossa academia para te passar a dieta adequada!\n");
		
		printf("Preparamos um treino ideia para voc%c!\n\n", 136);
		sleep(2);
		printf("\t*IMPRIMINDO*\n");
		printf("Siga os treinos: \n");
		sleep(1);
		printf("Aquecimento: 5-10 minutos de pulos de corda ou corrida leve.\n");
		sleep(1);
		printf("Flex%ces de bra%co (3 s%cries de 12 repeti%c%ces)\n", 228, 135, 130, 135, 228);
		sleep(1);
		printf("Lunges (3 s%cries de 12 repeti%c%ces por perna)\n", 130, 135, 228);
		sleep(1);
		printf("Prancha (3 s%cries de 30 segundos)\n", 130);
		sleep(1);
		printf("Abdominais (3 s%cries de 15 repeti%c%ces)\n", 130, 135, 228);
		sleep(1);
		printf("Recomendamos que voc%c fa%ca muay thai!\n\n", 136, 135);
		sleep(1);
		printf("Certifique-se de descansar de 1 a 2 minutos entre as s%cries e ajustar a carga de peso de acordo com sua capacidade.\n", 130);
		sleep(1);
		printf("Treinos: Segunda-Feira, Quarta-Feira e Sexta-Feira.\n");
		sleep (1);
		printf("Descanso: Ter%ca-Feira e Quinta-Feira.\n", 135);
		sleep (1);
		printf("Lembre de sempre beber muita %cgua!\n", 133);
		sleep (1);
		printf("\nVamos treinaaar!!\n\n");
		sleep (1);

		
    }
    else if(c.imc>29.9 && c.imc<=34.9){
        printf("\nVoc%c est%c com obesidade grau 1! :(\n\n", 136, 160);
        printf("Vamos melhorar essa sa%cde treinando e com uma boa alimenta%c%co!!\n\n",163, 135, 198);
		printf("Procure a nutricionista em nossa academia para te passar a dieta adequada!\n");
		
		printf("Preparamos um treino ideial para voc%c!\n\n", 136);
		sleep(2);
		printf("\t*IMPRIMINDO*\n");
		printf("Siga os treinos: \n");
		sleep(1);
		printf("Aquecimento: 5-10 minutos de caminhada leve ou bicicleta ergom%ctrica.\n", 130);
		sleep(1);
		printf("Treinamento cardiovascular de baixo impacto\n");
		sleep(1);
		printf("Treinamento de resist%cncia com pesos leves\n", 136);
		sleep(1);
		printf("Exerc%ccios de mobilidade e flexibilidade\n", 130);
		sleep(1);
		printf("Atividade f%csica di%cria\n", 161, 160);
		sleep(1);
		printf("Recomendamos que voc%c fa%ca jiu jitsu!\n\n", 136, 135);
		sleep(1);
		printf("Lembre-se de respeitar os limites do seu corpo e sempre consultar um m%cdico antes de iniciar qualquer programa de exerc%ccios, especialmente se voc%c tem condi%c%ces de sa%cde pr%c-existentes\n", 130, 130, 136, 136, 228, 163, 130);
		sleep(1);
		printf("Certifique-se de descansar de 1 a 2 minutos entre as s%cries e ajustar a carga de peso de acordo com sua capacidade.\n", 130);
		sleep(1);
		printf("Treinos: Segunda-Feira, Quarta-Feira e Sexta-Feira.\n");
		sleep (1);
		printf("Descanso: Ter%ca-Feira e Quinta-Feira.\n", 135);
		sleep (1);
		printf("Beber muita %cgua!\n", 133);
		sleep (1);
		printf("Vamos treinaaaaar!!\n\n");
		sleep (1);

    }
    else if(c.imc>34.9 && c.imc<=39.9){
        printf("\nVoc%c est%c com obesidade grau 2 (Severa)! :(\n\n", 136, 160);
        printf("Vamos melhorar essa sa%cde treinando e com uma boa alimenta%c%co!!", 163, 135, 198);
        printf("\nProcure ajuda m%cdica caso n%co se sinta bem!\n\n", 130, 198);
		
		printf("Preparamos um treino ideial para voc%c!\n\n", 136);
		sleep(2);
		printf("\t*IMPRIMINDO*\n");
		printf("Siga os treinos: \n");
		sleep(1);
		printf("Aquecimento: Comece com 5-10 minutos de atividade cardiovascular de baixo impacto, como caminhada leve, bicicleta ergom%ctrica ou el%cptico.\n", 130, 161);
		sleep(1);
		printf("Treinamento de resist%cncia com pesos.\n", 136);
		sleep(1);
		printf("Treinamento cardiovascular de baixo impacto.\n");
		sleep(1);
		printf("Treinamento funcional.\n");
		sleep(1);
		printf("Alongamento e resfriamento.\n");
		sleep(1);
		printf("Recomendamos que voc%c fa%ca box!\n\n", 136, 135);
		sleep(1);
		printf("%c fundamental lembrar que a progress%co deve ser gradual e respeitar os limites do seu corpo.\n", 144, 198);
		sleep(1);
		printf("Ou%ca os sinais do seu corpo, descanse quando necess%crio e consulte um profissional de sa%cde antes de iniciar qualquer programa de exerc%ccios.\n", 135, 160, 163, 161);
		sleep(1);
		printf("Certifique-se de descansar de 1 a 2 minutos entre as s%cries e ajustar a carga de peso de acordo com sua capacidade.\n", 130);
		sleep(1);
		printf("Treinos: Segunda-Feira, Quarta-Feira e Sexta-Feira.\n");
		sleep (1);
		printf("Descanso: Ter%ca-Feira e Quinta-Feira.\n", 135);
		sleep (1);
		printf("Lembre de sempre beber muita %cgua!\n", 133);
		sleep (1);
		printf("\nVamos treinaaar!!\n\n");
		sleep (1);

    }
    else if(c.imc>40.0){
        printf("\nVoc%c est%c com obesidade grau 3 (M%crbida)! :(\n\n", 136, 160, 162);
        printf("Recomendo que procure um m%cdico urgentemente, Obesidade %c uma DOEN%cA!!!!!!\n\n", 130, 130, 128);
		
		
		printf("Preparamos um treino ideial para voc%c!\n\n", 136);
		sleep(2);
		printf("\t*IMPRIMINDO*\n");
		printf("Siga os treinos: \n");
		sleep (1);
		printf("Aquecimento: Comece com 5-10 minutos de atividade cardiovascular de baixo impacto, como caminhada leve, bicicleta ergom%ctrica ou el%cptico.\n", 130, 161);
		sleep(1);
		printf("Treinamento de resist%cncia com pesos.\n", 136);
		sleep(1);
		printf("Treinamento cardiovascular de baixo impacto.\n");
		sleep(1);
		printf("Treinamento funcional.\n");
		sleep(1);
		printf("Alongamento e resfriamento.\n");
		sleep(1);
		printf("Recomendamos que voc%c fa%ca box!\n\n", 136, 135);
		sleep(1);
		printf("%c fundamental lembrar que a progress%co deve ser gradual e respeitar os limites do seu corpo.\n", 144, 198);
		sleep(1);
		printf("Ou%ca os sinais do seu corpo, descanse quando necess%crio e consulte um profissional de sa%cde antes de iniciar qualquer programa de exerc%ccios.\n", 135, 160, 163, 161);
		sleep(1);
		printf("Certifique-se de descansar de 1 a 2 minutos entre as s%cries e ajustar a carga de peso de acordo com sua capacidade.\n", 130);
		sleep (1);
		printf("Treinos: Segunda-Feira, Quarta-Feira e Sexta-Feira.\n");
		sleep (1);
		printf("Descanso: Ter%ca-Feira e Quinta-Feira.\n", 135);
		sleep (1);
		printf("Lembre de sempre beber muita %cgua!\n", 133);
		sleep (1);
		printf("\nVamos treinaaar!!\n\n");
		sleep (1);
    }
  return c.imc;
}

void convencional(){
    printf("\n-Direito a 2 horas de treino por dia-\n");
    printf("-Direito a uso de todos os equipamentos sem restri%c%co-\n", 135, 198);
    printf("-Arm%crio exclusivo-\n", 160);
    printf("-Ajuda de nossos professores especializados-\n\n");
    printf("Valor: R$ 79.90\n");
}
void black(){
    printf("\n-Direito a 4 horas de treino por dia-\n");
    printf("-Direito a uso de todos os equipamentos sem restri%c%co-\n", 135, 198);
    printf("-Arm%crio exclusivo-\n", 160);
    printf("-Escolha de até uma modalidade de luta com professor espcializado(Box, Jiu jitsu ou Muay Thai)-\n");
    printf("-10%c de desconto nos produtos Space GYM e afiliados-\n", 37);
    printf("Valor: R$ 99.90\n");
}
void space(){
    printf("\n-Direito a todos dias de treino sem restri%c%co de horas-\n", 135, 198);
    printf("-Direito a uso de todos os equipamentos sem restri%c%co-\n", 135, 198);
    printf("-Arm%crio exclusivo-\n", 160);
    printf("-Escolha de até duas modalidades de luta com professor espcializado(Box, Jiu jitsu ou Muay Thai)-\n");
    printf("-20%c de desconto em produtos em nossa academia!\n", 37);
    printf("Valor: R$ 119.90\n");
}
void salvararquivo(struct Cadastro cad[], int vetor){
	int i;
	
	FILE* arq_acad = fopen("Dados.csv", "w");
	
	if(arq_acad == NULL){
		printf("Erro ao abrir arquivo!!\n");
		return;
	}
	
	fprintf(arq_acad, "NOME, CPF, SEXO, ALTURA, PESO, IMC\n");
	
	for(i=0; i<vetor; i++){
		fprintf(arq_acad, "%s, %s, %s, %.2f, %.2f, %.2f\n", cad[i].nome, cad[i].cpf, cad[i].sexo, cad[i].altura, cad[i].peso, cad[i].imc);	
	}
		
	fclose(arq_acad);
	
	
	printf("Arquivo CSV salvo com sucesso!!\n");	
	
}

void lercsv(struct Cadastro cad[], int* vetor){
	
	FILE* arq_acad = fopen("Dados.csv", "r");
	
	if(arq_acad == NULL){
		printf("Erro ao abrir arquivo!!\n");
		return;
	}
	
	char linha[200];
	*vetor = 0;
	
	fgets(linha, 200, arq_acad);
	
	while(fgets(linha, 200, arq_acad) != NULL){
		char* token = strtok(linha, ",");
		
		if(token == NULL){
			continue;
		}
		
		strcpy(cad[*vetor].nome, token);
        
        token = strtok(NULL, ",");
        
        if (token == NULL) {
            continue;
        }
        
        strcpy(cad[*vetor].cpf, token);
        
        token = strtok(NULL, ",");
        
        if (token == NULL) {
            continue;
        }
        
        strcpy(cad[*vetor].sexo, token);
        
        token = strtok(NULL, ",");
        
        if (token == NULL) {
            continue;
        }
        
        cad[*vetor].altura = atof(token);
        
        token = strtok(NULL, ",");
        
        if (token == NULL) {
            continue;
        }
        
        cad[*vetor].peso = atof(token);
        
        token = strtok(NULL, ",");
        
        if (token == NULL) {
            continue;
        }
        
        cad[*vetor].imc = atof(token);
        
        (*vetor)++;
	}
	
	fclose(arq_acad);
}

void imprimir(const struct Cadastro cad[], int vetor) {
    int k;
    
    for (k = 0; k < vetor; k++) {
    	printf(GREEN"\t*%d%c CADASTRO*\n\n"RESET, (k+1), 167);
    	
    	printf(RED"NOME: %s\n",  cad[k].nome);
    	printf("CPF: %s\n", cad[k].cpf);
    	printf("DATA DE NASCIMENTO: %d/%d/%d\n", cad[k].dianasc, cad[k].mesnasc, cad[k].anonasc);
    	printf("ALTURA: %.2f\t PESO: %.2f\t IMC: %.2f\n", cad[k].altura, cad[k].peso, cad[k].imc);
    	printf("1-Convencional\t2-Black\t3-Space\n");
    	printf("Plano selecionado: %d\n\n"RESET, cad[k].planoescolhido);
    	
    }
}
	






int main(){

    int opcao, opcao1;
    int i;
    int vetor, vetorinst;
    int alterar, alterar1;
    
    vetorinst=0;
    
    struct Cadastro cad[200];
    struct Cadastroinstrutor cadinstrutor[200];
    
    lercsv(cad, &vetor);
    system("pause");

    limpar();
	exibirLogo();
	sleep(1);
	printf("\n");
    cabecalho();

    printf("\n-Ja imaginou realizar seu sonho de ter aquele corpo definido?-\n");
    printf("\t   -Nossas mensalidades cabem no seu bolso!-\n");
    printf("\t     -Aqui na Space Gym tudo %c Possivel!-\n", 130);

    int planos, arrey;
    arrey=0;
    
    printf("\n\nDeseja conhecer nossos planos? Ou ja nos conhece e deseja se cadastrar?\n\n");
    printf("1-Conhece Planos/Mensalidades\n2-Pular para o Cadastro Aluno/Professor\nSelecione: ");
    scanf("%d", &planos);
    while(planos<1 || planos>2){
        printf("\nDigite uma op%c%co v%clida!!!\n", 135, 198, 160);
        printf("1-Conhece Planos/Mensalidades\n2-Pular para o Cadastro Aluno/Professor\nSelecione: ");
        scanf("%d", &planos);
    }

    limpar();
    
    
    switch (planos){
    
        case 1:
        	limpar();
            cabplanos();

            printf("\n\t\t*Planos da Academia*\n\n");
            printf("*Plano Convencional: Direito a todas as m%cquinas e Professor da Space GYM R$79.90*\n", 160);
            printf("*Plano Black: Direito a todas as m%cquinas e Professor da Space GYM, Direito %c uma Modalidades de Luta (Box, Jiu Jitsu e Muay Thai) R$99.90*\n", 160, 133);
            printf("*Plano Space: Direito a todas as m%cquinas e Professor da Space GYM, Direito %c at%c duas Modalidades de Luta (Box, Jiu Jitsu e Muay Thai) 119.90*\n", 160, 133, 130);
            
            printf("\nSe deseja saber mais detalhes sobre algum dos planos Selecione uma Op%c%co: \n", 135, 198);
            do{
				
				
                printf("\n1-Convencional\n2-Black\n3-Space\n4-Ir para o menu principal\n\nSelecione: ");
                scanf("%d", &cad[arrey].planoescolhido);
                while(cad[arrey].planoescolhido<1 || cad[arrey].planoescolhido>4){
                    printf("\nDigite uma op%c%co v%clida!!!\n", 135, 198, 160);
                    printf("\n1-Convencional\n2-Black\n3-Space\n4-Ir para o menu principal\n5-Pular para o cadastro\n\nSelecione: ");
                    scanf("%d", &cad[arrey].planoescolhido);
                }

                switch (cad[arrey].planoescolhido){
                    case 1:
                        limpar();
                        cabconvencional();

                        convencional();
                        system("pause");

                        printf("\nEscolha uma op%c%co: \n", 135, 198);
                        printf("1-Se Cadastrar neste plano\n2-Ir para o menu principal\n3-Ver outros planos\nSelecione: ", 198);
                        scanf("%d", &opcao1);
                        while(opcao1<1 || opcao1>3){
                            printf("\nDigite uma op%c%co v%clida!!!\n", 135, 198, 160);
                            printf("1-Se Cadastrar neste plano\n2-Ir para o menu principal\n3-Ver outros planos\nSelecione: ", 198);
                            scanf("%d", &opcao1);
                        }
                        break;

                    case 2:
                        limpar();
                        cabblack();

                        black();
                        system("pause");    

                        printf("\nEscolha uma op%c%co: \n", 135, 198);
                        printf("1-Se Cadastrar neste plano\n2-Ir para o menu principal\n3-Ver outros planos\nSelecione: ", 198);
                        scanf("%d", &opcao1);
                        while(opcao1<1 || opcao1>3){
                            printf("\nDigite uma op%c%co v%clida!!!\n", 135, 198, 160);
                            printf("1-Se Cadastrar neste plano\n2-Ir para o menu principal\n3-Ver outros planos\nSelecione: ", 198);
                            scanf("%d", &opcao1);
                        }
                        break;
                    
                    case 3:
                        limpar();
                        cabspace();

                        space();
                        system("pause");

                        printf("\nEscolha uma op%c%co: \n", 135, 198);
                        printf("1-Se Cadastrar neste plano\n2-Ir para o menu principal\n3-Ver outros planos\nSelecione: ", 198);
                        scanf("%d", &opcao1);
                        while(opcao1<1 || opcao1>3){
                            printf("\nDigite uma op%c%co v%clida!!!\n", 135, 198, 160);
                            printf("1-Se Cadastrar neste plano\n2-Ir para o menu principal\n3-Ver outros planos\nSelecione: ", 198);
                            scanf("%d", &opcao1);
                        }
                        break;

                    case 4:
                        opcao1==2;
                        break;

                    default:
                        break;

                    }

            }while(opcao1==3); 
            break;

        case 2:
            break;

        default:
            break;
    }
    
    vetor=0;
    
    int cadastro;
    cadastro=0;

    do{
        limpar();
        menu();
        printf("\nOque deseja realizar? \n");
        printf("\n1-Cadastro do Aluno\n2-Sou Professor\n3-Imprimir Cadastros\n4-Sair do menu\n");
        printf("Selecione: ");
        scanf("%d", &opcao);
        while(opcao<1 || opcao>4){
            printf("\nDigite uma op%c%co v%clida: ", 135, 198, 160);
            printf("\n1-Cadastro do Aluno\n2-Sou Professor\n3-Imprimir Cadastros\n4-Sair do menu\n");
            printf("\nSelecione: ");
            scanf("%d", &opcao);
       	}
    
        switch (opcao) {
        	
            case 1:
                limpar();
                cadastroaluno();
                
                
                printf("\n\nConclua seu cadastro para ter acesso aos tipos de treinos:\n\n", 135);
                fflush(stdin);
                    
               
            	printf("\t*%d%c Cadastro*\n\n", (vetor+1), 167);
             
                printf("Nome: ");
                gets(cad[vetor].nome);
                fflush(stdin);

                printf("CPF: ");
                gets(cad[vetor].cpf);
                fflush(stdin);

                printf("\t*Data de Nascimento*\n");
                printf("Dia: ");
                scanf("%d", &cad[vetor].dianasc);
				
				while(cad[vetor].dianasc<1 || cad[vetor].dianasc>31){
					printf("\nDigite uma op%c%co v%clida: \n", 135, 198, 160);
					printf("Dia: ");
               		scanf("%d", &cad[vetor].dianasc);
				}

                printf("M%cs: ", 136);
                scanf("%d", &cad[vetor].mesnasc);
                
                while(cad[vetor].mesnasc<1 || cad[vetor].mesnasc>12){
					printf("\nDigite uma op%c%co v%clida: ", 135, 198, 160);
					printf("M%cs: ", 136);
               		scanf("%d", &cad[vetor].mesnasc);
				}

                printf("Ano: ");
                scanf("%d", &cad[vetor].anonasc);
                fflush(stdin);

                printf("\t*sexo*\n"); 
                printf("M - Masculino\tF - Feminino\tO - Outros\tP - Prefiro n%co informar\nSexo: ", 198);
                gets(cad[vetor].sexo);
                fflush(stdin);

                printf("Telefone: ");
                gets(cad[vetor].telefone);
                fflush(stdin);

                printf("email: ");
                gets(cad[vetor].email);
                fflush(stdin);

                printf("\n\t*Endere%co*\n", 135);
                printf("CEP: ");
                gets(cad[vetor].e.cep);
                fflush(stdin);

                printf("Rua: ");
                gets(cad[vetor].e.rua);
                fflush(stdin);

                printf("N%cmero: ", 163);
                gets(cad[vetor].e.numero);
                fflush(stdin);

                printf("Bairro: ");
                gets(cad[vetor].e.bairro);
                fflush(stdin);

                printf("Cidade: ");
                gets(cad[vetor].e.cidade);
                fflush(stdin);

                printf("Estado: ");
                gets(cad[vetor].e.estado);

                system("pause");
                
                limpar();
                tabelaicm();

                printf("\nAltura: ");
    			scanf("%f", &cad[vetor].altura);
    			printf("Peso: ");
    			scanf("%f", &cad[vetor].peso);
				
				
                cad[vetor].imc = imccad(cad[vetor]);

                system("pause");
				limpar();
				
				int escolhaplano;
				
				printf("Voc%c ja se cadastrou em algum plano ?\n", 136);
				printf("1-SIM\t2-N%cO\nSelecione: ", 199);
				scanf("%d", &escolhaplano);
				while(escolhaplano<1 || escolhaplano>2){
					printf("\nDigite uma op%c%co v%clida: \n", 135, 198, 160);
					printf("1-SIM\t2-N%cO\nSelecione: ", 199);
					scanf("%d", &escolhaplano);
				}
				
                if(escolhaplano==1){
                    limpar();
                    
					
                    switch(cad[arrey].planoescolhido){
                        case 1:
                            cabconvencional(); 
                            printf("Voce se inscreveu no plano: \n");
                            printf("\t\t*Convencional*\n");
                            printf("Venha at%c a nossa academia presencialmente para efetuar o pagamento!!!\n\n", 130);
                            break;
                        
                        case 2:
                            cabblack();
                            printf("Voce se inscreveu no plano: \n");
                            printf("\t\t*Black*\n");
                            printf("Venha at%c a nossa academia presencialmente para efetuar o pagamento!!!\n\n", 130);                            
                            break;

                        case 3:
                            cabspace();
                            printf("Voce se inscreveu no plano: \n");
                            printf("\t\t*Space*\n");
                            printf("Venha at%c a nossa academia presencialmente para efetuar o pagamento!!!\n\n", 130);
                            break;    
                    }
                }

                int planos1;

                if(escolhaplano==2){
                    
                    
                    do{
                        limpar();
                        cabplanos();

                        printf("\nEscolha um plano para ver seus detalhes: \n\n");
                        printf("1-Convencional\n2-Black\n3-Space\nSelecione: ");
                        scanf("%d", &planos1);
                        while(planos1<1 || planos1>3){
                             printf("\nDigite uma op%c%co v%clida: \n", 135, 198, 160);
                             printf("1-Convencional\n2-Black\n3-Space\nSelecione: ");
                            scanf("%d", &planos1);
                        }

                        switch(planos1){
                            case 1:
                                limpar();
                                cabconvencional();
                                convencional();

                                printf("\nDeseja contratar este plano ?\n");
                                printf("1-SIM\n2-Escolher outro plano\nSelecione: ");
                                scanf("%d", &cad[arrey].planoescolhido);
                                while(cad[arrey].planoescolhido<1 || cad[arrey].planoescolhido>2){
                                    printf("\nDigite uma op%c%co v%clida: \n", 135, 198, 160);
                                    printf("1-SIM\n2-Escolher outro plano\nSelecione: ");
                                    scanf("%d", &cad[arrey].planoescolhido);
                                }

                                if(cad[arrey].planoescolhido==1){
                                    limpar();
                                    cabconvencional();
                                    printf("\nVoce se inscreveu no plano: ");
                                    printf("*CONVENCIONAL*\n");
                                    printf("Venha at%c a nossa academia presencialmente para efetuar o pagamento!!!\n\n", 130);
                                }

                                break;

                            case 2: 
                                limpar();
                                cabblack();
                                black();

                                printf("\nDeseja contratar este plano ?\n");
                                printf("1-SIM\n2-Escolher outro plano\nSelecione: ");
                                scanf("%d", &cad[arrey].planoescolhido);
                                while(cad[arrey].planoescolhido<1 || cad[arrey].planoescolhido>2){
                                    printf("\nDigite uma op%c%co v%clida: \n", 135, 198, 160);
                                    printf("1-SIM\n2-Escolher outro plano\nSelecione: ");
                                    scanf("%d", &cad[arrey].planoescolhido);
                                }

                                if(cad[arrey].planoescolhido==1){
                                    limpar();
                                    cabblack();
                                    printf("Voce se inscreveu no plano: ");
                                    printf("*BLACK*\n");
                                    printf("Venha at%c a nossa academia presencialmente para efetuar o pagamento!!!\n\n", 130);
                                }

                                break;

                            case 3:
                                limpar();
                                cabspace();
                                space();

                                printf("\nDeseja contratar este plano ?\n");
                                printf("1-SIM\n2-Escolher outro plano\nSelecione: ");
                                scanf("%d", &cad[arrey].planoescolhido);
                                while(cad[arrey].planoescolhido<1 || cad[arrey].planoescolhido>2){
                                    printf("\nDigite uma op%c%co v%clida: \n", 135, 198, 160);
                                    printf("1-SIM\n2-Escolher outro plano\nSelecione: ");
                                    scanf("%d", &cad[arrey].planoescolhido);
                                }

                                if(cad[arrey].planoescolhido==1){
                                    limpar();
                                    cabspace();
                                    printf("Voce se inscreveu no plano: ");
                                    printf("*SPACE*\n");
                                    printf("Venha at%c a nossa academia presencialmente para efetuar o pagamento!!!\n\n", 130);
                                }

                                break;
                        }        
                    
                    }while(cad[arrey].planoescolhido==2);
                }
                
                cadastro=1;
				
				arrey++;
                vetor++; 
                system("pause");
                
                break;
            
            
            case 2:
                limpar();
                cadastroprofessor();
                
                
                
                printf("\t*Cadastro do Professor*\n\n", (vetorinst+1), 167);
                
				fflush(stdin);
                printf("Nome completo: ");
                gets(cadinstrutor[vetorinst].nome1);
                fflush(stdin);

                printf("CPF: ");    
                gets(cadinstrutor[vetorinst].cpf1);

                printf("\t*data de nascimento*\n");
                printf("Dia: ");
                scanf("%d", &cadinstrutor[vetor].dia);
                
                printf("M%cs: ", 135);
                scanf("%d", &cadinstrutor[vetor].mes);

                printf("Ano: ");
                scanf("%d", &cadinstrutor[vetor].ano);
                fflush(stdin);

                printf("Telefone: ");
                gets(cadinstrutor[vetorinst].telefone1);
                fflush(stdin);

                printf("Email: ");
                gets(cadinstrutor[vetorinst].email1);
                fflush(stdin);

                printf("\t*Sexo*\n");
                printf("M - Masculino\tF - Feminino\nSexo: ", 198);
                scanf("%c", &cadinstrutor[vetorinst].sexo1);
                fflush(stdin);

                printf("Formo%c%co Academica: ", 135, 198);
                gets(cadinstrutor[vetorinst].formado1);
                fflush(stdin);

                printf("Conte um pouco da sua Experi%cncia Profissional em at%c 125 Letras: ", 136, 130);
                gets(cadinstrutor[vetorinst].experiencia);
                fflush(stdin);
                

                
                printf("\n\t*Endere%co*\n", 135);
                printf("CEP: ");
                gets(cadinstrutor[vetorinst].e.cep);
                fflush(stdin);


                printf("Rua: ");
                gets(cadinstrutor[vetorinst].e.rua);
                fflush(stdin);

                printf("N%cmero: ", 163);
                gets(cadinstrutor[vetorinst].e.numero);
                fflush(stdin);

                printf("Bairro: ");
                gets(cadinstrutor[vetorinst].e.bairro);
                fflush(stdin);
    
                printf("Estado: ");
                gets(cadinstrutor[vetorinst].e.estado);
                fflush(stdin);

                printf("Cidade: ");
                gets(cadinstrutor[vetorinst].e.cidade);
                fflush(stdin);

                printf("\nSeu cadastro foi enviado, analisaremos e enviaremos um email para contato!\n\n");
                
                vetorinst++;
                
                system("pause");
                
                break;

            case 3:
            
                limpar();
                imprimir(cad, vetor);
                
                printf("\n\nDeseja alterar o plano de algum cadastro ? caso nao queira tecle -1\n");
                printf("Selecione qual alterar, começando em 0 como o primeiro cadastro: ");
                scanf("%d", &alterar);
                while(alterar<-1 || alterar>vetor){
                	printf("\nDigite uma op%c%co v%clida: \n", 135, 198, 160);
                	printf("\nSelecione qual alterar, come%cando em 0 como o primeiro cadastro: ", 135);
                	scanf("%d", &alterar);
				}
				
				
				alterar1=0;
				do{
					if(alterar==-1){
						break;
					}
					limpar();
					cabplanos();
					printf("\n\nEscolha Um plano: \n");
					printf("1-Convencional\n2-Black\n3-Space\nSelecione: ");
					scanf("%d", &cad[alterar].planoescolhido);
					while(cad[alterar].planoescolhido<1 || cad[alterar].planoescolhido>3){
						printf("1-Convencional\n2-Black\n3-Space\nSelecione: ");
						scanf("%d", &cad[alterar].planoescolhido);	
					}
					
					switch(cad[alterar].planoescolhido){
						case 1: 
							limpar();
							cabconvencional();
							convencional();
							printf("\n\nDeseja alterar para esse plano ?\n");
							printf("1-SIM\t2-N%cO\nSelecione: ", 199);
							scanf("%d", &alterar1);
							while(alterar1<1 || alterar1>2){
								printf("\nDigite uma op%c%co v%clida: \n", 135, 198, 160);
								printf("1-SIM\t2-N%cO\nSelecione: ", 199);
								scanf("%d", &alterar1);
							}
							break;
							
						case 2:
							limpar();
							cabblack();
							black();
							printf("\n\nDeseja alterar para esse plano ?\n");
							printf("1-SIM\t2-N%cO\nSelecione: ", 199);
							scanf("%d", &alterar1);
							while(alterar1<1 || alterar1>2){
								printf("\nDigite uma op%c%co v%clida: \n", 135, 198, 160);
								printf("1-SIM\t2-N%cO\nSelecione: ", 199);
								scanf("%d", &alterar1);
							}
							break;
							
						case 3:
							limpar();
							cabspace();
							space();
							printf("\n\nDeseja alterar para esse plano ?\n");
							printf("1-SIM\t2-N%cO\nSelecione: ", 199);
							scanf("%d", &alterar1);
							while(alterar1<1 || alterar1>2){
								printf("\nDigite uma op%c%co v%clida: \n", 135, 198, 160);
								printf("1-SIM\t2-N%cO\nSelecione: ", 199);
								scanf("%d", &alterar1);
							}
							break;
							
						default:
							break;
							
					}
				}while(alterar1==2);
				
				if(alterar1==1){
					printf("\n\nPlano alterado com sucesso!!\n\n");
					system("pause");
				}
				
                	
                break;

            case 4:
                limpar();
                salvararquivo(cad, vetor);
                break;

            default:
                break;
            }
    }while(opcao!=4);
    
    
    if(cadastro==1){
    	limpar();
    	parabens();
    	
		printf("\nObrigado por se cadastrar na Space Gym! Estamos empolgados por t%c-lo como parte da nossa comunidade.\n", 136);
		printf("\nEstamos prontos para ajud%c-lo em sua jornada fitness e proporcionar uma experi%cncia excepcional. Seja bem-vindo!\n", 160, 136);
		printf("\nAtenciosamente.\n");
		printf("\nA equipe da Space Gym :D\n");
	}
	
	
	if(cadastro==0){
		limpar();
		triste();
		
		printf("\nPercebi que n%co se cadastrou :(\n", 198);
		printf("Esperamos v%c-lo(a) em breve na Space Gym!\n", 136);
		printf("\nAtenciosamente.\n");
		printf("\nA equipe da Space Gym :)\n");	
	}
	   

    return 0;
}
