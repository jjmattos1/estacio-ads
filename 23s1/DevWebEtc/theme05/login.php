<?php
  session_start();
  $erro="";
  if(!isset($_POST["login"])or($_POST["login"]=="")) {
    $erro = "Preencha o Login!";
    }
    elseif(!isset($_POST["senha"])or($_POST["senha"]=="")) {
    $erro = "Preencha a senha!";
    }
    else {
      $login=$_POST["login"];
      $pw=$_POST["pw"];
      if($login!="admin" or $pw!="1234") {
        $erro = "Login ou senha inválido(s)!";
      }
      else
      {
        $_SESSION["user"] = "Administrador";
      }
    }
      if($erro!="") {
      header("Location: form_login.php?erro=$erro", true, 301);
      }
      else {
        header("Location: protegida.php", true, 301);
      }
      ?>