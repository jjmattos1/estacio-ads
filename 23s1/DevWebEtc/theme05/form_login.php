<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title>Login do Usuário</title>
</head>
<body>
  <?php
    if(isset($_GET["erro"]))
      echo("<hr/><h2>".$_GET["erro"]."</h2><hr/>");
  ?>
  <form action="login.php" method="post">
    <p>Login: <input type="text" name="login"/></p>
    <p>Senha: <input type="text" name="senha"/></p>
    <input type="submit" value="enviar"/>
  </form>
</body>
</html>
