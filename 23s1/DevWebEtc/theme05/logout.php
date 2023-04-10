<?php
  session_start();
  $_SESSION = array();
  session_destroy();
  header("Location: allModules-final.php", true, 301);
?>