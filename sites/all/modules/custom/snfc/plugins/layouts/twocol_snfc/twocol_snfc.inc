<?php

// Plugin definition
$plugin = array(
  'title' => t('SNFC Two column stacked'),
  'category' => t('SNFC'),
  'icon' => 'twocol_snfc.png',
  'theme' => 'panels_twocol_snfc',
  'css' => 'twocol_snfc.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
