Steps for creating a new release
--------------------------------

  1. Cleanup code
  2. Export configuration
  3. Review code
  4. Review accessibility
  5. Run tests
  6. Generate release notes
  7. Tag and create a new release
  8. Upload screencast to YouTube

1. Cleanup code
---------------

[Convert to short array syntax](https://www.drupal.org/project/short_array_syntax)

    drush short-array-syntax webform

Tidy YAML files

    @see DEVELOPMENT-CHEATSHEET.md


2. Export configuration
-----------------------

    @see DEVELOPMENT-CHEATSHEET.md


3. Review code
--------------

[Online](http://pareview.sh)

    http://git.drupal.org/project/webform.git 8.x-5.x

[Commandline](https://www.drupal.org/node/1587138)

    # Check Drupal coding standards
    phpcs --standard=Drupal --extensions=php,module,inc,install,test,profile,theme,css,info modules/sandbox/webform

    # Check Drupal best practices
    phpcs --standard=DrupalPractice --extensions=php,module,inc,install,test,profile,theme,js,css,info modules/sandbox/webform

[File Permissions](https://www.drupal.org/comment/reply/2690335#comment-form)

    # Files should be 644 or -rw-r--r--
    find * -type d -print0 | xargs -0 chmod 0755

    # Directories should be 755 or drwxr-xr-x
    find . -type f -print0 | xargs -0 chmod 0644

3. Review accessibility
-----------------------

[Pa11y](http://pa11y.org/)

Pa11y is your automated accessibility testing pal.

Notes
- Requires node 8.x+


    drush en -y webform_example_accessibility
    pa11y http://localhost/wf/webform/example_accessibility_basic
    pa11y http://localhost/wf/webform/example_accessibility_advanced
    pa11y http://localhost/wf/webform/example_accessibility_containers
    pa11y http://localhost/wf/webform/example_accessibility_wizard

5. Run tests
------------

[SimpleTest](https://www.drupal.org/node/645286)

    # Run all tests
    cd /var/www/sites/d8_webform
    php core/scripts/run-tests.sh --suppress-deprecations --url http://localhost/wf --module webform --dburl mysql://drupal_d8_webform:drupal.@dm1n@localhost/drupal_d8_webform

    # Run single tests
    cd /var/www/sites/d8_webform
    php core/scripts/run-tests.sh --suppress-deprecations --url http://localhost/wf --verbose --class "Drupal\Tests\webform\Functional\WebformListBuilderTest"

[PHPUnit](https://www.drupal.org/node/2116263)

Notes
- Links to PHP Unit HTML responses are not being printed by PHPStorm

References
- [Issue #2870145: Set printerClass in phpunit.xml.dist](https://www.drupal.org/node/2870145)
- [Lesson 10.2 - Unit testing](https://docs.acquia.com/article/lesson-102-unit-testing)

    # Export database and base URL.
    export SIMPLETEST_DB=mysql://drupal_d8_webform:drupal.@dm1n@localhost/drupal_d8_webform;
    export SIMPLETEST_BASE_URL='http://localhost/wf';

    # Execute all Webform PHPUnit tests.
    cd /var/www/sites/d8_webform/web/core
    php ../../vendor/phpunit/phpunit/phpunit --printer="\Drupal\Tests\Listeners\HtmlOutputPrinter" --group webform

    # Execute individual PHPUnit tests.
    cd /var/www/sites/d8_webform/web/core

    # Functional test.
    php ../../vendor/phpunit/phpunit/phpunit --printer="\Drupal\Tests\Listeners\HtmlOutputPrinter" ../modules/sandbox/webform/tests/src/Functional/WebformExampleFunctionalTest.php

    # Kernal test.
    php ../../vendor/phpunit/phpunit/phpunit --printer="\Drupal\Tests\Listeners\HtmlOutputPrinter" ../modules/sandbox/webform/tests/src/Kernal/Utility/WebformDialogHelperTest.php

    # Unit test.
    php ../../vendor/phpunit/phpunit/phpunit --printer="\Drupal\Tests\Listeners\HtmlOutputPrinter" ../modules/sandbox/webform/tests/src/Unit/Utility/WebformYamlTest.php

    php ../../vendor/phpunit/phpunit/phpunit --printer="\Drupal\Tests\Listeners\HtmlOutputPrinter" ../modules/sandbox/webform/tests/src/Unit/Access/WebformAccessCheckTest

6. Generate release notes
-------------------------

[Git Release Notes for Drush](https://www.drupal.org/project/grn)

    drush release-notes --nouser 8.x-5.0-VERSION 8.x-5.x


7. Tag and create a new release
-------------------------------

[Tag a release](https://www.drupal.org/node/1066342)

    git tag 8.x-5.0-VERSION
    git push --tags
    git push origin tag 8.x-5.0-VERSION

[Create new release](https://www.drupal.org/node/add/project-release/2640714)


8. Upload screencast to YouTube
-------------------------------

- Title : Webform 8.x-5.x-betaXX
- Tags: Drupal 8,Webform,Form Builder
- Privacy: listed
