@echo off
rem -- Check if argument is INSTALL or REMOVE

if not ""%1"" == ""INSTALL"" goto remove

if exist C:\Bitnami\DRUPAL~1.34-\mysql\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\mysql\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\postgresql\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\postgresql\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\elasticsearch\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\elasticsearch\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\apache2\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\apache2\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\apache-tomcat\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\apache-tomcat\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\resin\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\resin\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\jboss\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\jboss\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\wildfly\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\wildfly\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\openoffice\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\openoffice\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\subversion\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\subversion\scripts\serviceinstall.bat INSTALL)
rem RUBY_APPLICATION_INSTALL
if exist C:\Bitnami\DRUPAL~1.34-\mongodb\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\mongodb\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\lucene\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\lucene\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\third_application\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\third_application\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\nginx\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\nginx\scripts\serviceinstall.bat INSTALL)
if exist C:\Bitnami\DRUPAL~1.34-\php\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\php\scripts\serviceinstall.bat INSTALL)
goto end

:remove

if exist C:\Bitnami\DRUPAL~1.34-\third_application\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\third_application\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\lucene\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\lucene\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\mongodb\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\mongodb\scripts\serviceinstall.bat)
rem RUBY_APPLICATION_REMOVE
if exist C:\Bitnami\DRUPAL~1.34-\subversion\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\subversion\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\openoffice\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\openoffice\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\jboss\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\jboss\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\wildfly\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\wildfly\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\resin\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\resin\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\apache-tomcat\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\apache-tomcat\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\apache2\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\apache2\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\elasticsearch\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\elasticsearch\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\postgresql\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\postgresql\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\mysql\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\mysql\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\php\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\php\scripts\serviceinstall.bat)
if exist C:\Bitnami\DRUPAL~1.34-\nginx\scripts\serviceinstall.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\nginx\scripts\serviceinstall.bat)
:end
