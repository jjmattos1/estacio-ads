<!DOCTYPE html>
<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title>Formulário de Login</title>
</head>
<body>
  <?php
    if(isset($_GET["erro"]))
      echo("<hr/><h2>".$_GET["erro"]."</h2><hr/>");
  ?>
  <form action="login.php" method="post">
    <input type="text">
  </form>
</body>
</html>
