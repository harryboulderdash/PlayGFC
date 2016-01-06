@echo off
CALL C:\Bitnami\DRUPAL~1.34-\scripts\setenv.bat
START /MIN "Bitnami Drupal Stack Environment" CMD /C %*
                    