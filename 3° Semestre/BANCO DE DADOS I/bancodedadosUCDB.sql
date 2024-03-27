CREATE TABLE ALUNOS(
	ID SERIAL,
	NOME VARCHAR(200),
	CPF CHAR(11),
	CELULAR CHAR(9),
	EMAIL VARCHAR(150),
	CURSO VARCHAR(200)
);

INSERT INTO ALUNOS
(NOME, CPF,CELULAR,EMAIL,CURSO) VALUES
('Luís Fernando', '12345678910', '991948869', 'luisfernando@email.com', 'Engenharia de Computação'),
('Lucas', '12234545610', '991123123', 'lqualqueeqwo@email.com', 'Direito'),
('Maria', '19859485340', '441312319', 'maria2324fro@email.com', 'Medicina'),
('Luisa Eduarda', '93719731310', '888367236', 'luisaeduarda@email.com', 'Engenharia Civil'),
('João Gomes', '33345454540', '973287329', 'joaogomes234@email.com', 'Educação Fisica'),
('Joao Eduardo', '19997372370', '998655632', 'joaoeduardoo@email.com', 'Design'),
('Mariana', '98239829382', '545342123', 'mnarianna@email.com', 'Odontologia');



SELECT * FROM ALUNOS;

SELECT VERSION(); --SERVE PARA SABER AS INFORMAÇÕES DA VERSÃO DO NOSSO GERENCIADOR DE BANCO DE DADOS
SELECT CURRENT_DATE; --COMANDO PARA VERIFICAR A DATA ATUAL
SELECT CURRENT_TIME;
SELECT NOW(); --RETORNA A DATA E HORARIO DO MESMO INSTANTE QUE FOI EXECUTADA

CREATE DATABASE EMPRESA_TI;