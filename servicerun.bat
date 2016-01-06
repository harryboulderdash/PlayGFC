@echo off
rem START or STOP Services
rem ----------------------------------
rem Check if argument is STOP or START

if not ""%1"" == ""START"" goto stop

if exist C:\Bitnami\DRUPAL~1.34-\hypersonic\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\server\hsql-sample-database\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\ingres\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\ingres\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\mysql\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\mysql\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\postgresql\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\postgresql\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\elasticsearch\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\elasticsearch\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\apache2\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\apache2\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\openoffice\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\openoffice\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\apache-tomcat\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\apache-tomcat\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\resin\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\resin\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\jboss\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\jboss\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\wildfly\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\wildfly\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\jetty\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\jetty\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\subversion\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\subversion\scripts\servicerun.bat START)
rem RUBY_APPLICATION_START
if exist C:\Bitnami\DRUPAL~1.34-\lucene\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\lucene\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\mongodb\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\mongodb\scripts\servicerun.bat START)
if exist C:\Bitnami\DRUPAL~1.34-\third_application\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\third_application\scripts\servicerun.bat START)
goto end

:stop
echo "Stopping services ..."
if exist C:\Bitnami\DRUPAL~1.34-\third_application\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\third_application\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\lucene\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\lucene\scripts\servicerun.bat STOP)
rem RUBY_APPLICATION_STOP
if exist C:\Bitnami\DRUPAL~1.34-\subversion\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\subversion\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\jetty\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\jetty\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\hypersonic\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\server\hsql-sample-database\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\jboss\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\jboss\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\wildfly\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\wildfly\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\resin\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\resin\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\apache-tomcat\scripts\servicerun.bat (start /MIN /WAIT C:\Bitnami\DRUPAL~1.34-\apache-tomcat\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\openoffice\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\openoffice\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\apache2\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\apache2\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\elasticsearch\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\elasticsearch\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\ingres\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\ingres\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\mysql\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\mysql\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\mongodb\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\mongodb\scripts\servicerun.bat STOP)
if exist C:\Bitnami\DRUPAL~1.34-\postgresql\scripts\servicerun.bat (start /MIN C:\Bitnami\DRUPAL~1.34-\postgresql\scripts\servicerun.bat STOP)

:end
