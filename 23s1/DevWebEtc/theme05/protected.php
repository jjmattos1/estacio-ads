<?php
  session_start();
  if (!isset($_SESSION["usuario"]))
    header("Location: form_login.php",true,301);
  // starts rendering the protected page content.
  else {
?>
<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title>Página Protegida</title>
</head>
<body>
  <h1>Ola <?php echo ($_SESSION["usuario"]) ?></h1>
  <h2><a href="allModules-final.php"i>Retornar a página allModules-Final</a></h2>
</body>
</html>
<?php
  }
  // finishes rendering the protected page content.
?>