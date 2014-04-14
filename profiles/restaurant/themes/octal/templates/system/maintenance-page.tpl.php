<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
  <head>
    <title><?php print $head_title; ?></title>
    <?php print $head; ?>
    <?php print $styles; ?>
    <?php print $scripts; ?>
  </head>
  <body class="<?php print $classes; ?>">

  <header id="header" class="header" role="header">
    <nav class="navbar navbar-default navbar-static-top" role="navigation">
      <div class="container">
        <div class="navbar-header">
          <a href="<?php print $front_page; ?>" id="logo" class="navbar-brand">
            <?php print $site_name; ?>
          </a>
        </div> <!-- /.navbar-header -->

        <div class="navbar-right">
          <?php if (isset($steps)): ?>
            <p class="steps navbar-text"><?php print $steps; ?></p>
          <?php endif; ?>
        </div> <!-- /.navbar-right -->
      </div> <!-- /.container -->
    </nav>
  </header>

  <div id="main-wrapper">
    <div id="main" class="main container">
      <div class="row">
        <?php if ($sidebar_first): ?>
          <div class="col-md-3 sidebar">
            <?php print $sidebar_first; ?>
          </div>
        <?php endif ?>
        <div class="col-md-9">
          <?php if ($title): ?>
            <h1 class="page-header"><?php print $title; ?></h1>
          <?php endif; ?>
          <?php print $content; ?>
        </div>
      </div>
    </div> <!-- /#main -->
  </div> <!-- /#main-wrapper -->

  <footer id="footer" class="footer" role="footer">
    <div class="container">
      <?php if ($copyright): ?>
        <p class="copyright text-center text-muted"><small><?php print $copyright; ?></small></p>
      <?php endif; ?>
    </div>
  </footer>

  </body>
</html>