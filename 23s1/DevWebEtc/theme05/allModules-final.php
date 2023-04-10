<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title>Tema 5 @ Exercícios</title>
</head>
<body>
  <h1>Teste de login/página protegida</h1>
  <h2><a href="protected.php">Página Protegida</a></h2>
  <hr/>
  <?php
    session_start();
    if(isset($_SESSION["user"])) {
  ?>
  <a href="logout.php">Logout</a>
  <?php
      }
  ?>
  <p>Teste parágrafo</p>
</body>
</html>

<?php
/*
  Criar paginas de logon conforme exemplos do Cople e criar lista 
  com opções dos laços de repetição para fins de finalizar as praticas dos modulos 1 e 2.
*/
?>