[33mcommit dc6e12d645419478ab92979892f7d9ba716805f3[m
Author: v <volkan.kaya@hotmail.co.uk>
Date:   Sun Mar 6 10:12:16 2016 +0000

    first commit

[1mdiff --git a/.editorconfig b/.editorconfig[m
[1mnew file mode 100644[m
[1mindex 0000000..585e2ab[m
[1m--- /dev/null[m
[1m+++ b/.editorconfig[m
[36m@@ -0,0 +1,23 @@[m
[32m+[m[32m# http://editorconfig.org[m
[32m+[m
[32m+[m[32mroot = true[m
[32m+[m
[32m+[m[32m[*][m
[32m+[m[32mcharset = utf-8[m
[32m+[m[32mend_of_line = lf[m
[32m+[m[32minsert_final_newline = true[m
[32m+[m[32mtrim_trailing_whitespace = true[m
[32m+[m
[32m+[m[32m[*.{py,rst,ini}][m
[32m+[m[32mindent_style = space[m
[32m+[m[32mindent_size = 4[m
[32m+[m
[32m+[m[32m[*.{html,css,scss,json,yml}][m
[32m+[m[32mindent_style = space[m
[32m+[m[32mindent_size = 2[m
[32m+[m
[32m+[m[32m[*.md][m
[32m+[m[32mtrim_trailing_whitespace = false[m
[32m+[m
[32m+[m[32m[Makefile][m
[32m+[m[32mindent_style = tab[m
[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..9928c23[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,47 @@[m
[32m+[m[32m*.py[cod][m
[32m+[m[32m__pycache__[m
[32m+[m
[32m+[m[32m# C extensions[m
[32m+[m[32m*.so[m
[32m+[m
[32m+[m[32m# Packages[m
[32m+[m[32m*.egg[m
[32m+[m[32m*.egg-info[m
[32m+[m[32mdist[m
[32m+[m[32mbuild[m
[32m+[m[32meggs[m
[32m+[m[32mparts[m
[32m+[m[32mbin[m
[32m+[m[32mvar[m
[32m+[m[32msdist[m
[32m+[m[32mdevelop-eggs[m
[32m+[m[32m.installed.cfg[m
[32m+[m[32mlib[m
[32m+[m[32mlib64[m
[32m+[m
[32m+[m[32m# Installer logs[m
[32m+[m[32mpip-log.txt[m
[32m+[m
[32m+[m[32m# Unit test / coverage reports[m
[32m+[m[32m.coverage[m
[32m+[m[32m.tox[m
[32m+[m[32mnosetests.xml[m
[32m+[m[32mhtmlcov[m
[32m+[m
[32m+[m[32m# Translations[m
[32m+[m[32m*.mo[m
[32m+[m
[32m+[m[32m# Mr Developer[m
[32m+[m[32m.mr.developer.cfg[m
[32m+[m[32m.project[m
[32m+[m[32m.pydevproject[m
[32m+[m
[32m+[m[32m# Pycharm/Intellij[m
[32m+[m[32m.idea[m
[32m+[m
[32m+[m[32m# Complexity[m
[32m+[m[32moutput/*.html[m
[32m+[m[32moutput/*/index.html[m
[32m+[m
[32m+[m[32m# Sphinx[m
[32m+[m[32mdocs/_build[m
[1mdiff --git a/.travis.yml b/.travis.yml[m
[1mnew file mode 100644[m
[1mindex 0000000..d8c174f[m
[1m--- /dev/null[m
[1m+++ b/.travis.yml[m
[36m@@ -0,0 +1,21 @@[m
[32m+[m[32m# Config file for automatic testing at travis-ci.org[m
[32m+[m
[32m+[m[32mlanguage: python[m
[32m+[m
[32m+[m[32mpython:[m
[32m+[m[32m  - "3.5"[m
[32m+[m[32m  - "3.4"[m
[32m+[m[32m  - "3.3"[m
[32m+[m[32m  - "2.7"[m
[32m+[m
[32m+[m[32mbefore_install:[m
[32m+[m[32m  - pip install codecov[m
[32m+[m
[32m+[m[32m# command to install dependencies, e.g. pip install -r requirements.txt --use-mirrors[m
[32m+[m[32minstall: pip install -r requirements-test.txt[m
[32m+[m
[32m+[m[32m# command to run tests using coverage, e.g. python setup.py test[m
[32m+[m[32mscript: coverage run --source django_simple_chat runtests.py[m
[32m+[m
[32m+[m[32mafter_success:[m
[32m+[m[32m  - codecov[m
[1mdiff --git a/AUTHORS.rst b/AUTHORS.rst[m
[1mnew file mode 100644[m
[1mindex 0000000..6c69f60[m
[1m--- /dev/null[m
[1m+++ b/AUTHORS.rst[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m=======[m
[32m+[m[32mCredits[m
[32m+[m[32m=======[m
[32m+[m
[32m+[m[32mDevelopment Lead[m
[32m+[m[32m----------------[m
[32m+[m
[32m+[m[32m* Volkan Kaya <volkan.kaya@hotmail.co.uk>[m
[32m+[m
[32m+[m[32mContributors[m
[32m+[m[32m------------[m
[32m+[m
[32m+[m[32mNone yet. Why not be the first?[m
[1mdiff --git a/CONTRIBUTING.rst b/CONTRIBUTING.rst[m
[1mnew file mode 100644[m
[1mindex 0000000..b357abb[m
[1m--- /dev/null[m
[1m+++ b/CONTRIBUTING.rst[m
[36m@@ -0,0 +1,112 @@[m
[32m+[m[32m============[m
[32m+[m[32mContributing[m
[32m+[m[32m============[m
[32m+[m
[32m+[m[32mContributions are welcome, and they are greatly appreciated! Every[m
[32m+[m[32mlittle bit helps, and credit will always be given.[m[41m [m
[32m+[m
[32m+[m[32mYou can contribute in many ways:[m
[32m+[m
[32m+[m[32mTypes of Contributions[m
[32m+[m[32m----------------------[m
[32m+[m
[32m+[m[32mReport Bugs[m
[32m+[m[32m~~~~~~~~~~~[m
[32m+[m
[32m+[m[32mReport bugs at https://github.com/volkandkaya/django_simple_chat/issues.[m
[32m+[m
[32m+[m[32mIf you are reporting a bug, please include:[m
[32m+[m
[32m+[m[32m* Your operating system name and version.[m
[32m+[m[32m* Any details about your local setup that might be helpful in troubleshooting.[m
[32m+[m[32m* Detailed steps to reproduce the bug.[m
[32m+[m
[32m+[m[32mFix Bugs[m
[32m+[m[32m~~~~~~~~[m
[32m+[m
[32m+[m[32mLook through the GitHub issues for bugs. Anything tagged with "bug"[m
[32m+[m[32mis open to whoever wants to implement it.[m
[32m+[m
[32m+[m[32mImplement Features[m
[32m+[m[32m~~~~~~~~~~~~~~~~~~[m
[32m+[m
[32m+[m[32mLook through the GitHub issues for features. Anything tagged with "feature"[m
[32m+[m[32mis open to whoever wants to implement it.[m
[32m+[m
[32m+[m[32mWrite Documentation[m
[32m+[m[32m~~~~~~~~~~~~~~~~~~~[m
[32m+[m
[32m+[m[32mdjango_simple_chat could always use more documentation, whether as part of the[m[41m [m
[32m+[m[32mofficial django_simple_chat docs, in docstrings, or even on the web in blog posts,[m
[32m+[m[32marticles, and such.[m
[32m+[m
[32m+[m[32mSubmit Feedback[m
[32m+[m[32m~~~~~~~~~~~~~~~[m
[32m+[m
[32m+[m[32mThe best way to send feedback is to file an issue at https://github.com/volkandkaya/django_simple_chat/issues.[m
[32m+[m
[32m+[m[32mIf you are proposing a feature:[m
[32m+[m
[32m+[m[32m* Explain in detail how it would work.[m
[32m+[m[32m* Keep the scope as narrow as possible, to make it easier to implement.[m
[32m+[m[32m* Remember that this is a volunteer-driven project, and that contributions[m
[32m+[m[32m  are welcome :)[m
[32m+[m
[32m+[m[32mGet Started![m
[32m+[m[32m------------[m
[32m+[m
[32m+[m[32mReady to contribute? Here's how to set up `django_simple_chat` for local development.[m
[32m+[m
[32m+[m[32m1. Fork the `django_simple_chat` repo on GitHub.[m
[32m+[m[32m2. Clone your fork locally::[m
[32m+[m
[32m+[m[32m    $ git clone git@github.com:your_name_here/django_simple_chat.git[m
[32m+[m
[32m+[m[32m3. Install your local copy into a virtualenv. Assuming you have virtualenvwrapper installed, this is how you set up your fork for local development::[m
[32m+[m
[32m+[m[32m    $ mkvirtualenv django_simple_chat[m
[32m+[m[32m    $ cd django_simple_chat/[m
[32m+[m[32m    $ python setup.py develop[m
[32m+[m
[32m+[m[32m4. Create a branch for local development::[m
[32m+[m
[32m+[m[32m    $ git checkout -b name-of-your-bugfix-or-feature[m
[32m+[m
[32m+[m[32m   Now you can make your changes locally.[m
[32m+[m
[32m+[m[32m5. When you're done making changes, check that your changes pass flake8 and the[m
[32m+[m[32m   tests, including testing other Python versions with tox::[m
[32m+[m
[32m+[m[32m        $ flake8 django_simple_chat tests[m
[32m+[m[32m        $ python setup.py test[m
[32m+[m[32m        $ tox[m
[32m+[m
[32m+[m[32m   To get flake8 and tox, just pip install them into your virtualenv.[m[41m [m
[32m+[m
[32m+[m[32m6. Commit your changes and push your branch to GitHub::[m
[32m+[m
[32m+[m[32m    $ git add .[m
[32m+[m[32m    $ git commit -m "Your detailed description of your changes."[m
[32m+[m[32m    $ git push origin name-of-your-bugfix-or-feature[m
[32m+[m
[32m+[m[32m7. Submit a pull request through the GitHub website.[m
[32m+[m
[32m+[m[32mPull Request Guidelines[m
[32m+[m[32m-----------------------[m
[32m+[m
[32m+[m[32mBefore you submit a pull request, check that it meets these guidelines:[m
[32m+[m
[32m+[m[32m1. The pull request should include tests.[m
[32m+[m[32m2. If the pull request adds functionality, the docs should be updated. Put[m
[32m+[m[32m   your new functionality into a function with a docstring, and add the[m
[32m+[m[32m   feature to the list in README.rst.[m
[32m+[m[32m3. The pull request should work for Python 2.6, 2.7, and 3.3, and for PyPy. Check[m[41m [m
[32m+[m[32m   https://travis-ci.org/volkandkaya/django_simple_chat/pull_requests[m
[32m+[m[32m   and make sure that the tests pass for all supported Python versions.[m
[32m+[m
[32m+[m[32mTips[m
[32m+[m[32m----[m
[32m+[m
[32m+[m[32mTo run a subset of tests::[m
[32m+[m
[32m+[m[32m    $ python -m unittest tests.test_django_simple_chat[m
[1mdiff --git a/HISTORY.rst b/HISTORY.rst[m
[1mnew file mode 100644[m
[1mindex 0000000..1af5684[m
[1m--- /dev/null[m
[1m+++ b/HISTORY.rst[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m.. :changelog:[m
[32m+[m
[32m+[m[32mHistory[m
[32m+[m[32m-------[m
[32m+[m
[32m+[m[32m0.1.0 (2016-02-01)[m
[32m+[m[32m++++++++++++++++++[m
[32m+[m
[32m+[m[32m* First release on PyPI.[m
[1mdiff --git a/LICENSE b/LICENSE[m
[1mnew file mode 100644[m
[1mindex 0000000..d586c34[m
[1m--- /dev/null[m
[1m+++ b/LICENSE[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32mCopyright (c) 2016, Volkan Kaya[m
[32m+[m[32mAll rights reserved.[m
[32m+[m
[32m+[m[32mRedistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:[m
[32m+[m
[32m+[m[32m* Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.[m
[32m+[m
[32m+[m[32m* Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.[m
[32m+[m
[32m+[m[32m* Neither the name of django_simple_chat nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.[m
[32m+[m
[32m+[m[32mTHIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.[m
\ No newline at end of file[m
[1mdiff --git a/MANIFEST.in b/MANIFEST.in[m
[1mnew file mode 100644[m
[1mindex 0000000..467577c[m
[1m--- /dev/null[m
[1m+++ b/MANIFEST.in[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32minclude AUTHORS.rst[m
[32m+[m[32minclude CONTRIBUTING.rst[m
[32m+[m[32minclude HISTORY.rst[m
[32m+[m[32minclude LICENSE[m
[32m+[m[32minclude README.rst[m
[32m+[m[32mrecursive-include django_simple_chat *.html *.png *.gif *js *.css *jpg *jpeg *svg *py[m
[1mdiff --git a/Makefile b/Makefile[m
[1mnew file mode 100644[m
[1mindex 0000000..bd39d3d[m
[1m--- /dev/null[m
[1m+++ b/Makefile[m
[36m@@ -0,0 +1,55 @@[m
[32m+[m[32m.PHONY: clean-pyc clean-build docs[m
[32m+[m
[32m+[m[32mhelp:[m
[32m+[m	[32m@echo "clean-build - remove build artifacts"[m
[32m+[m	[32m@echo "clean-pyc - remove Python file artifacts"[m
[32m+[m	[32m@echo "lint - check style with flake8"[m
[32m+[m	[32m@echo "test - run tests quickly with the default Python"[m
[32m+[m	[32m@echo "test-all - run tests on every Python version with tox"[m
[32m+[m	[32m@echo "coverage - check code coverage quickly with the default Python"[m
[32m+[m	[32m@echo "docs - generate Sphinx HTML documentation, including API docs"[m
[32m+[m	[32m@echo "release - package and upload a release"[m
[32m+[m	[32m@echo "sdist - package"[m
[32m+[m
[32m+[m[32mclean: clean-build clean-pyc[m
[32m+[m
[32m+[m[32mclean-build:[m
[32m+[m	[32mrm -fr build/[m
[32m+[m	[32mrm -fr dist/[m
[32m+[m	[32mrm -fr *.egg-info[m
[32m+[m
[32m+[m[32mclean-pyc:[m
[32m+[m	[32mfind . -name '*.pyc' -exec rm -f {} +[m
[32m+[m	[32mfind . -name '*.pyo' -exec rm -f {} +[m
[32m+[m	[32mfind . -name '*~' -exec rm -f {} +[m
[32m+[m
[32m+[m[32mlint:[m
[32m+[m	[32mflake8 django_simple_chat tests[m
[32m+[m
[32m+[m[32mtest:[m
[32m+[m	[32mpython runtests.py tests[m
[32m+[m
[32m+[m[32mtest-all:[m
[32m+[m	[32mtox[m
[32m+[m
[32m+[m[32mcoverage:[m
[32m+[m	[32mcoverage run --source django_simple_chat runtests.py tests[m
[32m+[m	[32mcoverage report -m[m
[32m+[m	[32mcoverage html[m
[32m+[m	[32mopen htmlcov/index.html[m
[32m+[m
[32m+[m[32mdocs:[m
[32m+[m	[32mrm -f docs/django_simple_chat.rst[m
[32m+[m	[32mrm -f docs/modules.rst[m
[32m+[m	[32msphinx-apidoc -o docs/ django_simple_chat[m
[32m+[m	[32m$(MAKE) -C docs clean[m
[32m+[m	[32m$(MAKE) -C docs html[m
[32m+[m	[32mopen docs/_build/html/index.html[m
[32m+[m
[32m+[m[32mrelease: clean[m
[32m+[m	[32mpython setup.py sdist upload[m
[32m+[m	[32mpython setup.py bdist_wheel upload[m
[32m+[m
[32m+[m[32msdist: clean[m
[32m+[m	[32mpython setup.py sdist[m
[32m+[m	[32mls -l dist[m
[1mdiff --git a/README.rst b/README.rst[m
[1mnew file mode 100644[m
[1mindex 0000000..e4820ef[m
[1m--- /dev/null[m
[1m+++ b/README.rst[m
[36m@@ -0,0 +1,54 @@[m
[32m+[m[32m=============================[m
[32m+[m[32mdjango_simple_chat[m
[32m+[m[32m=============================[m
[32m+[m
[32m+[m[32m.. image:: https://badge.fury.io/py/django_simple_chat.png[m
[32m+[m[32m    :target: https://badge.fury.io/py/django_simple_chat[m
[32m+[m
[32m+[m[32m.. image:: https://travis-ci.org/volkandkaya/django_simple_chat.png?branch=master[m
[32m+[m[32m    :target: https://travis-ci.org/volkandkaya/django_simple_chat[m
[32m+[m
[32m+[m[32mDjango chat app[m
[32m+[m
[32m+[m[32mDocumentation[m
[32m+[m[32m-------------[m
[32m+[m
[32m+[m[32mThe full documentation is at https://django_simple_chat.readthedocs.org.[m
[32m+[m
[32m+[m[32mQuickstart[m
[32m+[m[32m----------[m
[32m+[m
[32m+[m[32mInstall django_simple_chat::[m
[32m+[m
[32m+[m[32m    pip install django_simple_chat[m
[32m+[m
[32m+[m[32mThen use it in a project::[m
[32m+[m
[32m+[m[32m    import django_simple_chat[m
[32m+[m
[32m+[m[32mFeatures[m
[32m+[m[32m--------[m
[32m+[m
[32m+[m[32m* TODO[m
[32m+[m
[32m+[m[32mRunning Tests[m
[32m+[m[32m--------------[m
[32m+[m
[32m+[m[32mDoes the code actually work?[m
[32m+[m
[32m+[m[32m::[m
[32m+[m
[32m+[m[32m    source <YOURVIRTUALENV>/bin/activate[m
[32m+[m[32m    (myenv) $ pip install -r requirements-test.txt[m
[32m+[m[32m    (myenv) $ python runtests.py[m
[32m+[m
[32m+[m[32mCredits[m
[32m+[m[32m---------[m
[32m+[m
[32m+[m[32mTools used in rendering this package:[m
[32m+[m
[32m+[m[32m*  Cookiecutter_[m
[32m+[m[32m*  `cookiecutter-pypackage`_[m
[32m+[m
[32m+[m[32m.. _Cookiecutter: https://github.com/audreyr/cookiecutter[m
[32m+[m[32m.. _`cookiecutter-djangopackage`: https://github.com/pydanny/cookiecutter-djangopackage[m
[1mdiff --git a/django_simple_chat/__init__.py b/django_simple_chat/__init__.py[m
[1mnew file mode 100644[m
[1mindex 0000000..b794fd4[m
[1m--- /dev/null[m
[1m+++ b/django_simple_chat/__init__.py[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m__version__ = '0.1.0'[m
[1mdiff --git a/django_simple_chat/models.py b/django_simple_chat/models.py[m
[1mnew file mode 100644[m
[1mindex 0000000..40a96af[m
[1m--- /dev/null[m
[1m+++ b/django_simple_chat/models.py[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m# -*- coding: utf-8 -*-[m
[1mdiff --git a/django_simple_chat/static/css/django_simple_chat.css b/django_simple_chat/static/css/django_simple_chat.css[m
[1mnew file mode 100644[m
[1mindex 0000000..e69de29[m
[1mdiff --git a/django_simple_chat/static/img/.gitignore b/django_simple_chat/static/img/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..e69de29[m
[1mdiff --git a/django_simple_chat/static/js/django_simple_chat.js b/django_simple_chat/static/js/django_simple_chat.js[m
[1mnew file mode 100644[m
[1mindex 0000000..e69de29[m
[1mdiff --git a/django_simple_chat/templates/django_simple_chat/base.html b/django_simple_chat/templates/django_simple_chat/base.html[m
[1mnew file mode 100644[m
[1mindex 0000000..09d26f3[m
[1m--- /dev/null[m
[1m+++ b/django_simple_chat/templates/django_simple_chat/base.html[m
[36m@@ -0,0 +1,21 @@[m
[32m+[m
[32m+[m[32m{% comment %}[m
[32m+[m[32mAs the developer of this package, don't place anything here if you can help it[m
[32m+[m[32msince this allows developers to have interoperability between your template[m
[32m+[m[32mstructure and their own.[m
[32m+[m
[32m+[m[32mExample: Developer melding the 2SoD pattern to fit inside with another pattern::[m
[32m+[m
[32m+[m[32m    {% extends "base.html" %}[m
[32m+[m[32m    {% load static %}[m
[32m+[m
[32m+[m[32m    <!-- Their site uses old school block layout -->[m
[32m+[m[32m    {% block extra_js %}[m
[32m+[m
[32m+[m[32m        <!-- Your package using 2SoD block layout -->[m
[32m+[m[32m        {% block javascript %}[m
[32m+[m[32m            <script src="{% static 'js/ninja.js' %}" type="text/javascript"></script>[m
[32m+[m[32m        {% endblock javascript %}[m
[32m+[m
[32m+[m[32m    {% endblock extra_js %}[m
[32m+[m[32m{% endcomment %}[m
[1mdiff --git a/docs/Makefile b/docs/Makefile[m
[1mnew file mode 100644[m
[1mindex 0000000..0e35bee[m
[1m--- /dev/null[m
[1m+++ b/docs/Makefile[m
[36m@@ -0,0 +1,177 @@[m
[32m+[m[32m# Makefile for Sphinx documentation[m
[32m+[m[32m#[m
[32m+[m
[32m+[m[32m# You can set these variables from the command line.[m
[32m+[m[32mSPHINXOPTS    =[m
[32m+[m[32mSPHINXBUILD   = sphinx-build[m
[32m+[m[32mPAPER         =[m
[32m+[m[32mBUILDDIR      = _build[m
[32m+[m
[32m+[m[32m# User-friendly check for sphinx-build[m
[32m+[m[32mifeq ($(shell which $(SPHINXBUILD) >/dev/null 2>&1; echo $$?), 1)[m
[32m+[m[32m$(error The '$(SPHINXBUILD)' command was not found. Make sure you have Sphinx installed, then set the SPHINXBUILD environment variable to point to the full path of the '$(SPHINXBUILD)' executable. Alternatively you can add the directory with the executable to your PATH. If you don't have Sphinx installed, grab it from http://sphinx-doc.org/)[m
[32m+[m[32mendif[m
[32m+[m
[32m+[m[32m# Internal variables.[m
[32m+[m[32mPAPEROPT_a4     = -D latex_paper_size=a4[m
[32m+[m[32mPAPEROPT_letter = -D latex_paper_size=letter[m
[32m+[m[32mALLSPHINXOPTS   = -d $(BUILDDIR)/doctrees $(PAPEROPT_$(PAPER)) $(SPHINXOPTS) .[m
[32m+[m[32m# the i18n builder cannot share the environment and doctrees with the others[m
[32m+[m[32mI18NSPHINXOPTS  = $(PAPEROPT_$(PAPER)) $(SPHINXOPTS) .[m
[32m+[m
[32m+[m[32m.PHONY: help clean html dirhtml singlehtml pickle json htmlhelp qthelp devhelp epub latex latexpdf text man changes linkcheck doctest gettext[m
[32m+[m
[32m+[m[32mhelp:[m
[32m+[m	[32m@echo "Please use \`make <target>' where <target> is one of"[m
[32m+[m	[32m@echo "  html       to make standalone HTML files"[m
[32m+[m	[32m@echo "  dirhtml    to make HTML files named index.html in directories"[m
[32m+[m	[32m@echo "  singlehtml to make a single large HTML file"[m
[32m+[m	[32m@echo "  pickle     to make pickle files"[m
[32m+[m	[32m@echo "  json       to make JSON files"[m
[32m+[m	[32m@echo "  htmlhelp   to make HTML files and a HTML help project"[m
[32m+[m	[32m@echo "  qthelp     to make HTML files and a qthelp project"[m
[32m+[m	[32m@echo "  devhelp    to make HTML files and a Devhelp project"[m
[32m+[m	[32m@echo "  epub       to make an epub"[m
[32m+[m	[32m@echo "  latex      to make LaTeX files, you can set PAPER=a4 or PAPER=letter"[m
[32m+[m	[32m@echo "  latexpdf   to make LaTeX files and run them through pdflatex"[m
[32m+[m	[32m@echo "  latexpdfja to make LaTeX files and run them through platex/dvipdfmx"[m
[32m+[m	[32m@echo "  text       to make text files"[m
[32m+[m	[32m@echo "  man        to make manual pages"[m
[32m+[m	[32m@echo "  texinfo    to make Texinfo files"[m
[32m+[m	[32m@echo "  info       to make Texinfo files and run them through makeinfo"[m
[32m+[m	[32m@echo "  gettext    to make PO message catalogs"[m
[32m+[m	[32m@echo "  changes    to make an overview of all changed/added/deprecated items"[m
[32m+[m	[32m@echo "  xml        to make Docutils-native XML files"[m
[32m+[m	[32m@echo "  pseudoxml  to make pseudoxml-XML files for display purposes"[m
[32m+[m	[32m@echo "  linkcheck  to check all external links for integrity"[m
[32m+[m	[32m@echo "  doctest    to run all doctests embedded in the documentation (if enabled)"[m
[32m+[m
[32m+[m[32mclean:[m
[32m+[m	[32mrm -rf $(BUILDDIR)/*[m
[32m+[m
[32m+[m[32mhtml:[m
[32m+[m	[32m$(SPHINXBUILD) -b html $(ALLSPHINXOPTS) $(BUILDDIR)/html[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished. The HTML pages are in $(BUILDDIR)/html."[m
[32m+[m
[32m+[m[32mdirhtml:[m
[32m+[m	[32m$(SPHINXBUILD) -b dirhtml $(ALLSPHINXOPTS) $(BUILDDIR)/dirhtml[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished. The HTML pages are in $(BUILDDIR)/dirhtml."[m
[32m+[m
[32m+[m[32msinglehtml:[m
[32m+[m	[32m$(SPHINXBUILD) -b singlehtml $(ALLSPHINXOPTS) $(BUILDDIR)/singlehtml[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished. The HTML page is in $(BUILDDIR)/singlehtml."[m
[32m+[m
[32m+[m[32mpickle:[m
[32m+[m	[32m$(SPHINXBUILD) -b pickle $(ALLSPHINXOPTS) $(BUILDDIR)/pickle[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished; now you can process the pickle files."[m
[32m+[m
[32m+[m[32mjson:[m
[32m+[m	[32m$(SPHINXBUILD) -b json $(ALLSPHINXOPTS) $(BUILDDIR)/json[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished; now you can process the JSON files."[m
[32m+[m
[32m+[m[32mhtmlhelp:[m
[32m+[m	[32m$(SPHINXBUILD) -b htmlhelp $(ALLSPHINXOPTS) $(BUILDDIR)/htmlhelp[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished; now you can run HTML Help Workshop with the" \[m
[32m+[m	[32m      ".hhp project file in $(BUILDDIR)/htmlhelp."[m
[32m+[m
[32m+[m[32mqthelp:[m
[32m+[m	[32m$(SPHINXBUILD) -b qthelp $(ALLSPHINXOPTS) $(BUILDDIR)/qthelp[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished; now you can run "qcollectiongenerator" with the" \[m
[32m+[m	[32m      ".qhcp project file in $(BUILDDIR)/qthelp, like this:"[m
[32m+[m	[32m@echo "# qcollectiongenerator $(BUILDDIR)/qthelp/complexity.qhcp"[m
[32m+[m	[32m@echo "To view the help file:"[m
[32m+[m	[32m@echo "# assistant -collectionFile $(BUILDDIR)/qthelp/complexity.qhc"[m
[32m+[m
[32m+[m[32mdevhelp:[m
[32m+[m	[32m$(SPHINXBUILD) -b devhelp $(ALLSPHINXOPTS) $(BUILDDIR)/devhelp[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished."[m
[32m+[m	[32m@echo "To view the help file:"[m
[32m+[m	[32m@echo "# mkdir -p $$HOME/.local/share/devhelp/complexity"[m
[32m+[m	[32m@echo "# ln -s $(BUILDDIR)/devhelp $$HOME/.local/share/devhelp/complexity"[m
[32m+[m	[32m@echo "# devhelp"[m
[32m+[m
[32m+[m[32mepub:[m
[32m+[m	[32m$(SPHINXBUILD) -b epub $(ALLSPHINXOPTS) $(BUILDDIR)/epub[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished. The epub file is in $(BUILDDIR)/epub."[m
[32m+[m
[32m+[m[32mlatex:[m
[32m+[m	[32m$(SPHINXBUILD) -b latex $(ALLSPHINXOPTS) $(BUILDDIR)/latex[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished; the LaTeX files are in $(BUILDDIR)/latex."[m
[32m+[m	[32m@echo "Run \`make' in that directory to run these through (pdf)latex" \[m
[32m+[m	[32m      "(use \`make latexpdf' here to do that automatically)."[m
[32m+[m
[32m+[m[32mlatexpdf:[m
[32m+[m	[32m$(SPHINXBUILD) -b latex $(ALLSPHINXOPTS) $(BUILDDIR)/latex[m
[32m+[m	[32m@echo "Running LaTeX files through pdflatex..."[m
[32m+[m	[32m$(MAKE) -C $(BUILDDIR)/latex all-pdf[m
[32m+[m	[32m@echo "pdflatex finished; the PDF files are in $(BUILDDIR)/latex."[m
[32m+[m
[32m+[m[32mlatexpdfja:[m
[32m+[m	[32m$(SPHINXBUILD) -b latex $(ALLSPHINXOPTS) $(BUILDDIR)/latex[m
[32m+[m	[32m@echo "Running LaTeX files through platex and dvipdfmx..."[m
[32m+[m	[32m$(MAKE) -C $(BUILDDIR)/latex all-pdf-ja[m
[32m+[m	[32m@echo "pdflatex finished; the PDF files are in $(BUILDDIR)/latex."[m
[32m+[m
[32m+[m[32mtext:[m
[32m+[m	[32m$(SPHINXBUILD) -b text $(ALLSPHINXOPTS) $(BUILDDIR)/text[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished. The text files are in $(BUILDDIR)/text."[m
[32m+[m
[32m+[m[32mman:[m
[32m+[m	[32m$(SPHINXBUILD) -b man $(ALLSPHINXOPTS) $(BUILDDIR)/man[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished. The manual pages are in $(BUILDDIR)/man."[m
[32m+[m
[32m+[m[32mtexinfo:[m
[32m+[m	[32m$(SPHINXBUILD) -b texinfo $(ALLSPHINXOPTS) $(BUILDDIR)/texinfo[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished. The Texinfo files are in $(BUILDDIR)/texinfo."[m
[32m+[m	[32m@echo "Run \`make' in that directory to run these through makeinfo" \[m
[32m+[m	[32m      "(use \`make info' here to do that automatically)."[m
[32m+[m
[32m+[m[32minfo:[m
[32m+[m	[32m$(SPHINXBUILD) -b texinfo $(ALLSPHINXOPTS) $(BUILDDIR)/texinfo[m
[32m+[m	[32m@echo "Running Texinfo files through makeinfo..."[m
[32m+[m	[32mmake -C $(BUILDDIR)/texinfo info[m
[32m+[m	[32m@echo "makeinfo finished; the Info files are in $(BUILDDIR)/texinfo."[m
[32m+[m
[32m+[m[32mgettext:[m
[32m+[m	[32m$(SPHINXBUILD) -b gettext $(I18NSPHINXOPTS) $(BUILDDIR)/locale[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished. The message catalogs are in $(BUILDDIR)/locale."[m
[32m+[m
[32m+[m[32mchanges:[m
[32m+[m	[32m$(SPHINXBUILD) -b changes $(ALLSPHINXOPTS) $(BUILDDIR)/changes[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "The overview file is in $(BUILDDIR)/changes."[m
[32m+[m
[32m+[m[32mlinkcheck:[m
[32m+[m	[32m$(SPHINXBUILD) -b linkcheck $(ALLSPHINXOPTS) $(BUILDDIR)/linkcheck[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Link check complete; look for any errors in the above output " \[m
[32m+[m	[32m      "or in $(BUILDDIR)/linkcheck/output.txt."[m
[32m+[m
[32m+[m[32mdoctest:[m
[32m+[m	[32m$(SPHINXBUILD) -b doctest $(ALLSPHINXOPTS) $(BUILDDIR)/doctest[m
[32m+[m	[32m@echo "Testing of doctests in the sources finished, look at the " \[m
[32m+[m	[32m      "results in $(BUILDDIR)/doctest/output.txt."[m
[32m+[m
[32m+[m[32mxml:[m
[32m+[m	[32m$(SPHINXBUILD) -b xml $(ALLSPHINXOPTS) $(BUILDDIR)/xml[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished. The XML files are in $(BUILDDIR)/xml."[m
[32m+[m
[32m+[m[32mpseudoxml:[m
[32m+[m	[32m$(SPHINXBUILD) -b pseudoxml $(ALLSPHINXOPTS) $(BUILDDIR)/pseudoxml[m
[32m+[m	[32m@echo[m
[32m+[m	[32m@echo "Build finished. The pseudo-XML files are in $(BUILDDIR)/pseudoxml."[m
[1mdiff --git a/docs/authors.rst b/docs/authors.rst[m
[1mnew file mode 100644[m
[1mindex 0000000..e122f91[m
[1m--- /dev/null[m
[1m+++ b/docs/authors.rst[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m.. include:: ../AUTHORS.rst[m
[1mdiff --git a/docs/conf.py b/docs/conf.py[m
[1mnew file mode 100644[m
[1mindex 0000000..51ae0a3[m
[1m--- /dev/null[m
[1m+++ b/docs/conf.py[m
[36m@@ -0,0 +1,254 @@[m
[32m+[m[32m# -*- coding: utf-8 -*-[m
[32m+[m[32m#[m
[32m+[m[32m# complexity documentation build configuration file, created by[m
[32m+[m[32m# sphinx-quickstart on Tue Jul  9 22:26:36 2013.[m
[32m+[m[32m#[m
[32m+[m[32m# This file is execfile()d with the current directory set to its containing dir.[m
[32m+[m[32m#[m
[32m+[m[32m# Note that not all possible configuration values are present in this[m
[32m+[m[32m# autogenerated file.[m
[32m+[m[32m#[m
[32m+[m[32m# All configuration values have a default; values that are commented out[m
[32m+[m[32m# serve to show the default.[m
[32m+[m
[32m+[m[32mimport sys, os[m
[32m+[m
[32m+[m[32m# If extensions (or modules to document with autodoc) are in another directory,[m
[32m+[m[32m# add these directories to sys.path here. If the directory is relative to the[m
[32m+[m[32m# documentation root, use os.path.abspath to make it absolute, like shown here.[m
[32m+[m[32m#sys.path.insert(0, os.path.abspath('.'))[m
[32m+[m
[32m+[m[32mcwd = os.getcwd()[m
[32m+[m[32mparent = os.path.dirname(cwd)[m
[32m+[m[32msys.path.append(parent)[m
[32m+[m
[32m+[m[32mimport django_simple_chat[m
[32m+[m
[32m+[m[32m# -- General configuration -----------------------------------------------------[m
[32m+[m
[32m+[m[32m# If your documentation needs a minimal Sphinx version, state it here.[m
[32m+[m[32m#needs_sphinx = '1.0'[m
[32m+[m
[32m+[m[32m# Add any Sphinx extension module names here, as strings. They can be extensions[m
[32m+[m[32m# coming with Sphinx (named 'sphinx.ext.*') or your custom ones.[m
[32m+[m[32mextensions = ['sphinx.ext.autodoc', 'sphinx.ext.viewcode'][m
[32m+[m
[32m+[m[32m# Add any paths that contain templates here, relative to this directory.[m
[32m+[m[32mtemplates_path = ['_templates'][m
[32m+[m
[32m+[m[32m# The suffix of source filenames.[m
[32m+[m[32msource_suffix = '.rst'[m
[32m+[m
[32m+[m[32m# The encoding of source files.[m
[32m+[m[32m#source_encoding = 'utf-8-sig'[m
[32m+[m
[32m+[m[32m# The master toctree document.[m
[32m+[m[32mmaster_doc = 'index'[m
[32m+[m
[32m+[m[32m# General information about the project.[m
[32m+[m[32mproject = u'django_simple_chat'[m
[32m+[m[32mcopyright = u'2016, Volkan Kaya'[m
[32m+[m
[32m+[m[32m# The version info for the project you're documenting, acts as replacement for[m
[32m+[m[32m# |version| and |release|, also used in various other places throughout the[m
[32m+[m[32m# built documents.[m
[32m+[m[32m#[m
[32m+[m[32m# The short X.Y version.[m
[32m+[m[32mversion = django_simple_chat.__version__[m
[32m+[m[32m# The full version, including alpha/beta/rc tags.[m
[32m+[m[32mrelease = django_simple_chat.__version__[m
[32m+[m
[32m+[m[32m# The language for content autogenerated by Sphinx. Refer to documentation[m
[32m+[m[32m# for a list of supported languages.[m
[32m+[m[32m#language = None[m
[32m+[m
[32m+[m[32m# There are two options for replacing |today|: either, you set today to some[m
[32m+[m[32m# non-false value, then it is used:[m
[32m+[m[32m#today = ''[m
[32m+[m[32m# Else, today_fmt is used as the format for a strftime call.[m
[32m+[m[32m#today_fmt = '%B %d, %Y'[m
[32m+[m
[32m+[m[32m# List of patterns, relative to source directory, that match files and[m
[32m+[m[32m# directories to ignore when looking for source files.[m
[32m+[m[32mexclude_patterns = ['_build'][m
[32m+[m
[32m+[m[32m# The reST default role (used for this markup: `text`) to use for all documents.[m
[32m+[m[32m#default_role = None[m
[32m+[m
[32m+[m[32m# If true, '()' will be appended to :func: etc. cross-reference text.[m
[32m+[m[32m#add_function_parentheses = True[m
[32m+[m
[32m+[m[32m# If true, the current module name will be prepended to all description[m
[32m+[m[32m# unit titles (such as .. function::).[m
[32m+[m[32m#add_module_names = True[m
[32m+[m
[32m+[m[32m# If true, sectionauthor and moduleauthor directives will be shown in the[m
[32m+[m[32m# output. They are ignored by default.[m
[32m+[m[32m#show_authors = False[m
[32m+[m
[32m+[m[32m# The name of the Pygments (syntax highlighting) style to use.[m
[32m+[m[32mpygments_style = 'sphinx'[m
[32m+[m
[32m+[m[32m# A list of ignored prefixes for module index sorting.[m
[32m+[m[32m#modindex_common_prefix = [][m
[32m+[m
[32m+[m[32m# If true, keep warnings as "system message" paragraphs in the built documents.[m
[32m+[m[32m#keep_warnings = False[m
[32m+[m
[32m+[m
[32m+[m[32m# -- Options for HTML output ---------------------------------------------------[m
[32m+[m
[32m+[m[32m# The theme to use for HTML and HTML Help pages.  See the documentation for[m
[32m+[m[32m# a list of builtin themes.[m
[32m+[m[32mhtml_theme = 'default'[m
[32m+[m
[32m+[m[32m# Theme options are theme-specific and customize the look and feel of a theme[m
[32m+[m[32m# further.  For a list of options available for each theme, see the[m
[32m+[m[32m# documentation.[m
[32m+[m[32m#html_theme_options = {}[m
[32m+[m
[32m+[m[32m# Add any paths that contain custom themes here, relative to this directory.[m
[32m+[m[32m#html_theme_path = [][m
[32m+[m
[32m+[m[32m# The name for this set of Sphinx documents.  If None, it defaults to[m
[32m+[m[32m# "<project> v<release> documentation".[m
[32m+[m[32m#html_title = None[m
[32m+[m
[32m+[m[32m# A shorter title for the navigation bar.  Default is the same as html_title.[m
[32m+[m[32m#html_short_title = None[m
[32m+[m
[32m+[m[32m# The name of an image file (relative to this directory) to place at the top[m
[32m+[m[32m# of the sidebar.[m
[32m+[m[32m#html_logo = None[m
[32m+[m
[32m+[m[32m# The name of an image file (within the static path) to use as favicon of the[m
[32m+[m[32m# docs.  This file should be a Windows icon file (.ico) being 16x16 or 32x32[m
[32m+[m[32m# pixels large.[m
[32m+[m[32m#html_favicon = None[m
[32m+[m
[32m+[m[32m# Add any paths that contain custom static files (such as style sheets) here,[m
[32m+[m[32m# relative to this directory. They are copied after the builtin static files,[m
[32m+[m[32m# so a file named "default.css" will overwrite the builtin "default.css".[m
[32m+[m[32mhtml_static_path = ['_static'][m
[32m+[m
[32m+[m[32m# If not '', a 'Last updated on:' timestamp is inserted at every page bottom,[m
[32m+[m[32m# using the given strftime format.[m
[32m+[m[32m#html_last_updated_fmt = '%b %d, %Y'[m
[32m+[m
[32m+[m[32m# If true, SmartyPants will be used to convert quotes and dashes to[m
[32m+[m[32m# typographically correct entities.[m
[32m+[m[32m#html_use_smartypants = True[m
[32m+[m
[32m+[m[32m# Custom sidebar templates, maps document names to template names.[m
[32m+[m[32m#html_sidebars = {}[m
[32m+[m
[32m+[m[32m# Additional templates that should be rendered to pages, maps page names to[m
[32m+[m[32m# template names.[m
[32m+[m[32m#html_additional_pages = {}[m
[32m+[m
[32m+[m[32m# If false, no module index is generated.[m
[32m+[m[32m#html_domain_indices = True[m
[32m+[m
[32m+[m[32m# If false, no index is generated.[m
[32m+[m[32m#html_use_index = True[m
[32m+[m
[32m+[m[32m# If true, the index is split into individual pages for each letter.[m
[32m+[m[32m#html_split_index = False[m
[32m+[m
[32m+[m[32m# If true, links to the reST sources are added to the pages.[m
[32m+[m[32m#html_show_sourcelink = True[m
[32m+[m
[32m+[m[32m# If true, "Created using Sphinx" is shown in the HTML footer. Default is True.[m
[32m+[m[32m#html_show_sphinx = True[m
[32m+[m
[32m+[m[32m# If true, "(C) Copyright ..." is shown in the HTML footer. Default is True.[m
[32m+[m[32m#html_show_copyright = True[m
[32m+[m
[32m+[m[32m# If true, an OpenSearch description file will be output, and all pages will[m
[32m+[m[32m# contain a <link> tag referring to it.  The value of this option must be the[m
[32m+[m[32m# base URL from which the finished HTML is served.[m
[32m+[m[32m#html_use_opensearch = ''[m
[32m+[m
[32m+[m[32m# This is the file name suffix for HTML files (e.g. ".xhtml").[m
[32m+[m[32m#html_file_suffix = None[m
[32m+[m
[32m+[m[32m# Output file base name for HTML help builder.[m
[32m+[m[32mhtmlhelp_basename = 'django_simple_chatdoc'[m
[32m+[m
[32m+[m
[32m+[m[32m# -- Options for LaTeX output --------------------------------------------------[m
[32m+[m
[32m+[m[32mlatex_elements = {[m
[32m+[m[32m# The paper size ('letterpaper' or 'a4paper').[m
[32m+[m[32m#'papersize': 'letterpaper',[m
[32m+[m
[32m+[m[32m# The font size ('10pt', '11pt' or '12pt').[m
[32m+[m[32m#'pointsize': '10pt',[m
[32m+[m
[32m+[m[32m# Additional stuff for the LaTeX preamble.[m
[32m+[m[32m#'preamble': '',[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m# Grouping the document tree into LaTeX files. List of tuples[m
[32m+[m[32m# (source start file, target name, title, author, documentclass [howto/manual]).[m
[32m+[m[32mlatex_documents = [[m
[32m+[m[32m  ('index', 'django_simple_chat.tex', u'django_simple_chat Documentation',[m
[32m+[m[32m   u'Volkan Kaya', 'manual'),[m
[32m+[m[32m][m
[32m+[m
[32m+[m[32m# The name of an image file (relative to this directory) to place at the top of[m
[32m+[m[32m# the title page.[m
[32m+[m[32m#latex_logo = None[m
[32m+[m
[32m+[m[32m# For "manual" documents, if this is true, then toplevel headings are parts,[m
[32m+[m[32m# not chapters.[m
[32m+[m[32m#latex_use_parts = False[m
[32m+[m
[32m+[m[32m# If true, show page references after internal links.[m
[32m+[m[32m#latex_show_pagerefs = False[m
[32m+[m
[32m+[m[32m# If true, show URL addresses after external links.[m
[32m+[m[32m#latex_show_urls = False[m
[32m+[m
[32m+[m[32m# Documents to append as an appendix to all manuals.[m
[32m+[m[32m#latex_appendices = [][m
[32m+[m
[32m+[m[32m# If false, no module index is generated.[m
[32m+[m[32m#latex_domain_indices = True[m
[32m+[m
[32m+[m
[32m+[m[32m# -- Options for manual page output --------------------------------------------[m
[32m+[m
[32m+[m[32m# One entry per manual page. List of tuples[m
[32m+[m[32m# (source start file, name, description, authors, manual section).[m
[32m+[m[32mman_pages = [[m
[32m+[m[32m    ('index', 'django_simple_chat', u'django_simple_chat Documentation',[m
[32m+[m[32m     [u'Volkan Kaya'], 1)[m
[32m+[m[32m][m
[32m+[m
[32m+[m[32m# If true, show URL addresses after external links.[m
[32m+[m[32m#man_show_urls = False[m
[32m+[m
[32m+[m
[32m+[m[32m# -- Options for Texinfo output ------------------------------------------------[m
[32m+[m
[32m+[m[32m# Grouping the document tree into Texinfo files. List of tuples[m
[32m+[m[32m# (source start file, target name, title, author,[m
[32m+[m[32m#  dir menu entry, description, category)[m
[32m+[m[32mtexinfo_documents = [[m
[32m+[m[32m  ('index', 'django_simple_chat', u'django_simple_chat Documentation',[m
[32m+[m[32m   u'Volkan Kaya', 'django_simple_chat', 'One line description of project.',[m
[32m+[m[32m   'Miscellaneous'),[m
[32m+[m[32m][m
[32m+[m
[32m+[m[32m# Documents to append as an appendix to all manuals.[m
[32m+[m[32m#texinfo_appendices = [][m
[32m+[m
[32m+[m[32m# If false, no module index is generated.[m
[32m+[m[32m#texinfo_domain_indices = True[m
[32m+[m
[32m+[m[32m# How to display URL addresses: 'footnote', 'no', or 'inline'.[m
[32m+[m[32m#texinfo_show_urls = 'footnote'[m
[32m+[m
[32m+[m[32m# If true, do not generate a @detailmenu in the "Top" node's menu.[m
[32m+[m[32m#texinfo_no_detailmenu = False[m
[1mdiff --git a/docs/contributing.rst b/docs/contributing.rst[m
[1mnew file mode 100644[m
[1mindex 0000000..e582053[m
[1m--- /dev/null[m
[1m+++ b/docs/contributing.rst[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m.. include:: ../CONTRIBUTING.rst[m
[1mdiff --git a/docs/history.rst b/docs/history.rst[m
[1mnew file mode 100644[m
[1mindex 0000000..2506499[m
[1m--- /dev/null[m
[1m+++ b/docs/history.rst[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m.. include:: ../HISTORY.rst[m
[1mdiff --git a/docs/index.rst b/docs/index.rst[m
[1mnew file mode 100644[m
[1mindex 0000000..910733b[m
[1m--- /dev/null[m
[1m+++ b/docs/index.rst[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32m.. complexity documentation master file, created by[m
[32m+[m[32m   sphinx-quickstart on Tue Jul  9 22:26:36 2013.[m
[32m+[m[32m   You can adapt this file completely to your liking, but it should at least[m
[32m+[m[32m   contain the root `toctree` directive.[m
[32m+[m
[32m+[m[32mWelcome to django_simple_chat's documentation![m
[32m+[m[32m=================================================================[m
[32m+[m
[32m+[m[32mContents:[m
[32m+[m
[32m+[m[32m.. toctree::[m
[32m+[m[32m   :maxdepth: 2[m
[32m+[m
[32m+[m[32m   readme[m
[32m+[m[32m   installation[m
[32m+[m[32m   usage[m
[32m+[m[32m   contributing[m
[32m+[m[32m   authors[m
[32m+[m[32m   history[m
[1mdiff --git a/docs/installation.rst b/docs/installation.rst[m
[1mnew file mode 100644[m
[1mindex 0000000..3fdd48d[m
[1m--- /dev/null[m
[1m+++ b/docs/installation.rst[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m============[m
[32m+[m[32mInstallation[m
[32m+[m[32m============[m
[32m+[m
[32m+[m[32mAt the command line::[m
[32m+[m
[32m+[m[32m    $ easy_install django_simple_chat[m
[32m+[m
[32m+[m[32mOr, if you have virtualenvwrapper installed::[m
[32m+[m
[32m+[m[32m    $ mkvirtualenv django_simple_chat[m
[32m+[m[32m    $ pip install django_simple_chat[m
[1mdiff --git a/docs/make.bat b/docs/make.bat[m
[1mnew file mode 100644[m
[1mindex 0000000..2df9a8c[m
[1m--- /dev/null[m
[1m+++ b/docs/make.bat[m
[36m@@ -0,0 +1,242 @@[m
[32m+[m[32m@ECHO OFF[m
[32m+[m
[32m+[m[32mREM Command file for Sphinx documentation[m
[32m+[m
[32m+[m[32mif "%SPHINXBUILD%" == "" ([m
[32m+[m	[32mset SPHINXBUILD=sphinx-build[m
[32m+[m[32m)[m
[32m+[m[32mset BUILDDIR=_build[m
[32m+[m[32mset ALLSPHINXOPTS=-d %BUILDDIR%/doctrees %SPHINXOPTS% .[m
[32m+[m[32mset I18NSPHINXOPTS=%SPHINXOPTS% .[m
[32m+[m[32mif NOT "%PAPER%" == "" ([m
[32m+[m	[32mset ALLSPHINXOPTS=-D latex_paper_size=%PAPER% %ALLSPHINXOPTS%[m
[32m+[m	[32mset I18NSPHINXOPTS=-D latex_paper_size=%PAPER% %I18NSPHINXOPTS%[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "" goto help[m
[32m+[m
[32m+[m[32mif "%1" == "help" ([m
[32m+[m	[32m:help[m
[32m+[m	[32mecho.Please use `make ^<target^>` where ^<target^> is one of[m
[32m+[m	[32mecho.  html       to make standalone HTML files[m
[32m+[m	[32mecho.  dirhtml    to make HTML files named index.html in directories[m
[32m+[m	[32mecho.  singlehtml to make a single large HTML file[m
[32m+[m	[32mecho.  pickle     to make pickle files[m
[32m+[m	[32mecho.  json       to make JSON files[m
[32m+[m	[32mecho.  htmlhelp   to make HTML files and a HTML help project[m
[32m+[m	[32mecho.  qthelp     to make HTML files and a qthelp project[m
[32m+[m	[32mecho.  devhelp    to make HTML files and a Devhelp project[m
[32m+[m	[32mecho.  epub       to make an epub[m
[32m+[m	[32mecho.  latex      to make LaTeX files, you can set PAPER=a4 or PAPER=letter[m
[32m+[m	[32mecho.  text       to make text files[m
[32m+[m	[32mecho.  man        to make manual pages[m
[32m+[m	[32mecho.  texinfo    to make Texinfo files[m
[32m+[m	[32mecho.  gettext    to make PO message catalogs[m
[32m+[m	[32mecho.  changes    to make an overview over all changed/added/deprecated items[m
[32m+[m	[32mecho.  xml        to make Docutils-native XML files[m
[32m+[m	[32mecho.  pseudoxml  to make pseudoxml-XML files for display purposes[m
[32m+[m	[32mecho.  linkcheck  to check all external links for integrity[m
[32m+[m	[32mecho.  doctest    to run all doctests embedded in the documentation if enabled[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "clean" ([m
[32m+[m	[32mfor /d %%i in (%BUILDDIR%\*) do rmdir /q /s %%i[m
[32m+[m	[32mdel /q /s %BUILDDIR%\*[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m
[32m+[m[32m%SPHINXBUILD% 2> nul[m
[32m+[m[32mif errorlevel 9009 ([m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.The 'sphinx-build' command was not found. Make sure you have Sphinx[m
[32m+[m	[32mecho.installed, then set the SPHINXBUILD environment variable to point[m
[32m+[m	[32mecho.to the full path of the 'sphinx-build' executable. Alternatively you[m
[32m+[m	[32mecho.may add the Sphinx directory to PATH.[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.If you don't have Sphinx installed, grab it from[m
[32m+[m	[32mecho.http://sphinx-doc.org/[m
[32m+[m	[32mexit /b 1[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "html" ([m
[32m+[m	[32m%SPHINXBUILD% -b html %ALLSPHINXOPTS% %BUILDDIR%/html[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished. The HTML pages are in %BUILDDIR%/html.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "dirhtml" ([m
[32m+[m	[32m%SPHINXBUILD% -b dirhtml %ALLSPHINXOPTS% %BUILDDIR%/dirhtml[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished. The HTML pages are in %BUILDDIR%/dirhtml.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "singlehtml" ([m
[32m+[m	[32m%SPHINXBUILD% -b singlehtml %ALLSPHINXOPTS% %BUILDDIR%/singlehtml[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished. The HTML pages are in %BUILDDIR%/singlehtml.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "pickle" ([m
[32m+[m	[32m%SPHINXBUILD% -b pickle %ALLSPHINXOPTS% %BUILDDIR%/pickle[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished; now you can process the pickle files.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "json" ([m
[32m+[m	[32m%SPHINXBUILD% -b json %ALLSPHINXOPTS% %BUILDDIR%/json[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished; now you can process the JSON files.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "htmlhelp" ([m
[32m+[m	[32m%SPHINXBUILD% -b htmlhelp %ALLSPHINXOPTS% %BUILDDIR%/htmlhelp[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished; now you can run HTML Help Workshop with the ^[m
[32m+[m[32m.hhp project file in %BUILDDIR%/htmlhelp.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "qthelp" ([m
[32m+[m	[32m%SPHINXBUILD% -b qthelp %ALLSPHINXOPTS% %BUILDDIR%/qthelp[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished; now you can run "qcollectiongenerator" with the ^[m
[32m+[m[32m.qhcp project file in %BUILDDIR%/qthelp, like this:[m
[32m+[m	[32mecho.^> qcollectiongenerator %BUILDDIR%\qthelp\complexity.qhcp[m
[32m+[m	[32mecho.To view the help file:[m
[32m+[m	[32mecho.^> assistant -collectionFile %BUILDDIR%\qthelp\complexity.ghc[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "devhelp" ([m
[32m+[m	[32m%SPHINXBUILD% -b devhelp %ALLSPHINXOPTS% %BUILDDIR%/devhelp[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "epub" ([m
[32m+[m	[32m%SPHINXBUILD% -b epub %ALLSPHINXOPTS% %BUILDDIR%/epub[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished. The epub file is in %BUILDDIR%/epub.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "latex" ([m
[32m+[m	[32m%SPHINXBUILD% -b latex %ALLSPHINXOPTS% %BUILDDIR%/latex[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished; the LaTeX files are in %BUILDDIR%/latex.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "latexpdf" ([m
[32m+[m	[32m%SPHINXBUILD% -b latex %ALLSPHINXOPTS% %BUILDDIR%/latex[m
[32m+[m	[32mcd %BUILDDIR%/latex[m
[32m+[m	[32mmake all-pdf[m
[32m+[m	[32mcd %BUILDDIR%/..[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished; the PDF files are in %BUILDDIR%/latex.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "latexpdfja" ([m
[32m+[m	[32m%SPHINXBUILD% -b latex %ALLSPHINXOPTS% %BUILDDIR%/latex[m
[32m+[m	[32mcd %BUILDDIR%/latex[m
[32m+[m	[32mmake all-pdf-ja[m
[32m+[m	[32mcd %BUILDDIR%/..[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished; the PDF files are in %BUILDDIR%/latex.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "text" ([m
[32m+[m	[32m%SPHINXBUILD% -b text %ALLSPHINXOPTS% %BUILDDIR%/text[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished. The text files are in %BUILDDIR%/text.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "man" ([m
[32m+[m	[32m%SPHINXBUILD% -b man %ALLSPHINXOPTS% %BUILDDIR%/man[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished. The manual pages are in %BUILDDIR%/man.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "texinfo" ([m
[32m+[m	[32m%SPHINXBUILD% -b texinfo %ALLSPHINXOPTS% %BUILDDIR%/texinfo[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished. The Texinfo files are in %BUILDDIR%/texinfo.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "gettext" ([m
[32m+[m	[32m%SPHINXBUILD% -b gettext %I18NSPHINXOPTS% %BUILDDIR%/locale[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished. The message catalogs are in %BUILDDIR%/locale.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "changes" ([m
[32m+[m	[32m%SPHINXBUILD% -b changes %ALLSPHINXOPTS% %BUILDDIR%/changes[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.The overview file is in %BUILDDIR%/changes.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "linkcheck" ([m
[32m+[m	[32m%SPHINXBUILD% -b linkcheck %ALLSPHINXOPTS% %BUILDDIR%/linkcheck[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Link check complete; look for any errors in the above output ^[m
[32m+[m[32mor in %BUILDDIR%/linkcheck/output.txt.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "doctest" ([m
[32m+[m	[32m%SPHINXBUILD% -b doctest %ALLSPHINXOPTS% %BUILDDIR%/doctest[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Testing of doctests in the sources finished, look at the ^[m
[32m+[m[32mresults in %BUILDDIR%/doctest/output.txt.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "xml" ([m
[32m+[m	[32m%SPHINXBUILD% -b xml %ALLSPHINXOPTS% %BUILDDIR%/xml[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished. The XML files are in %BUILDDIR%/xml.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mif "%1" == "pseudoxml" ([m
[32m+[m	[32m%SPHINXBUILD% -b pseudoxml %ALLSPHINXOPTS% %BUILDDIR%/pseudoxml[m
[32m+[m	[32mif errorlevel 1 exit /b 1[m
[32m+[m	[32mecho.[m
[32m+[m	[32mecho.Build finished. The pseudo-XML files are in %BUILDDIR%/pseudoxml.[m
[32m+[m	[32mgoto end[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32m:end[m
[1mdiff --git a/docs/readme.rst b/docs/readme.rst[m
[1mnew file mode 100644[m
[1mindex 0000000..72a3355[m
[1m--- /dev/null[m
[1m+++ b/docs/readme.rst[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m.. include:: ../README.rst[m
[1mdiff --git a/docs/usage.rst b/docs/usage.rst[m
[1mnew file mode 100644[m
[1mindex 0000000..5726e67[m
[1m--- /dev/null[m
[1m+++ b/docs/usage.rst[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32m========[m
[32m+[m[32mUsage[m
[32m+[m[32m========[m
[32m+[m
[32m+[m[32mTo use django_simple_chat in a project::[m
[32m+[m
[32m+[m[32m    import django_simple_chat[m
[1mdiff --git a/requirements-test.txt b/requirements-test.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..22cf712[m
[1m--- /dev/null[m
[1m+++ b/requirements-test.txt[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32mdjango>=1.9.1[m
[32m+[m[32mcoverage[m
[32m+[m[32mmock>=1.0.1[m
[32m+[m[32mflake8>=2.1.0[m
[32m+[m[32mtox>=1.7.0[m
[32m+[m
[32m+[m[32m# Additional test requirements go here[m
[1mdiff --git a/requirements.txt b/requirements.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..6eeb004[m
[1m--- /dev/null[m
[1m+++ b/requirements.txt[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32mdjango>=1.9.1[m
[32m+[m[32m# Additional requirements go here[m
[1mdiff --git a/requirements_dev.txt b/requirements_dev.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..dae10f6[m
[1m--- /dev/null[m
[1m+++ b/requirements_dev.txt[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32mbumpversion==0.5.3[m
[32m+[m[32mwheel==0.24.0[m
[1mdiff --git a/runtests.py b/runtests.py[m
[1mnew file mode 100644[m
[1mindex 0000000..5ab1d1d[m
[1m--- /dev/null[m
[1m+++ b/runtests.py[m
[36m@@ -0,0 +1,55 @@[m
[32m+[m[32mimport sys[m
[32m+[m
[32m+[m[32mtry:[m
[32m+[m[32m    from django.conf import settings[m
[32m+[m[32m    from django.test.utils import get_runner[m
[32m+[m
[32m+[m[32m    settings.configure([m
[32m+[m[32m        DEBUG=True,[m
[32m+[m[32m        USE_TZ=True,[m
[32m+[m[32m        DATABASES={[m
[32m+[m[32m            "default": {[m
[32m+[m[32m                "ENGINE": "django.db.backends.sqlite3",[m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        ROOT_URLCONF="django_simple_chat.urls",[m
[32m+[m[32m        INSTALLED_APPS=[[m
[32m+[m[32m            "django.contrib.auth",[m
[32m+[m[32m            "django.contrib.contenttypes",[m
[32m+[m[32m            "django.contrib.sites",[m
[32m+[m[32m            "django_simple_chat",[m
[32m+[m[32m        ],[m
[32m+[m[32m        SITE_ID=1,[m
[32m+[m[32m        MIDDLEWARE_CLASSES=(),[m
[32m+[m[32m    )[m
[32m+[m
[32m+[m[32m    try:[m
[32m+[m[32m        import django[m
[32m+[m[32m        setup = django.setup[m
[32m+[m[32m    except AttributeError:[m
[32m+[m[32m        pass[m
[32m+[m[32m    else:[m
[32m+[m[32m        setup()[m
[32m+[m
[32m+[m[32mexcept ImportError:[m
[32m+[m[32m    import traceback[m
[32m+[m[32m    traceback.print_exc()[m
[32m+[m[32m    raise ImportError("To fix this error, run: pip install -r requirements-test.txt")[m
[32m+[m
[32m+[m
[32m+[m[32mdef run_tests(*test_args):[m
[32m+[m[32m    if not test_args:[m
[32m+[m[32m        test_args = ['tests'][m
[32m+[m
[32m+[m[32m    # Run tests[m
[32m+[m[32m    TestRunner = get_runner(settings)[m
[32m+[m[32m    test_runner = TestRunner()[m
[32m+[m
[32m+[m[32m    failures = test_runner.run_tests(test_args)[m
[32m+[m
[32m+[m[32m    if failures:[m
[32m+[m[32m        sys.exit(bool(failures))[m
[32m+[m
[32m+[m
[32m+[m[32mif __name__ == '__main__':[m
[32m+[m[32m    run_tests(*sys.argv[1:])[m
[1mdiff --git a/setup.cfg b/setup.cfg[m
[1mnew file mode 100644[m
[1mindex 0000000..538b154[m
[1m--- /dev/null[m
[1m+++ b/setup.cfg[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m[bumpversion][m
[32m+[m[32mcurrent_version = 0.1.0[m
[32m+[m[32mcommit = True[m
[32m+[m[32mtag = True[m
[32m+[m
[32m+[m[32m[bumpversion:file:setup.py][m
[32m+[m
[32m+[m[32m[bumpversion:file:django_simple_chat/__init__.py][m
[32m+[m
[32m+[m[32m[wheel][m
[32m+[m[32muniversal = 1[m
[1mdiff --git a/setup.py b/setup.py[m
[1mnew file mode 100755[m
[1mindex 0000000..ae38d04[m
[1m--- /dev/null[m
[1m+++ b/setup.py[m
[36m@@ -0,0 +1,75 @@[m
[32m+[m[32m#!/usr/bin/env python[m
[32m+[m[32m# -*- coding: utf-8 -*-[m
[32m+[m[32mimport os[m
[32m+[m[32mimport re[m
[32m+[m[32mimport sys[m
[32m+[m
[32m+[m[32mtry:[m
[32m+[m[32m    from setuptools import setup[m
[32m+[m[32mexcept ImportError:[m
[32m+[m[32m    from distutils.core import setup[m
[32m+[m
[32m+[m
[32m+[m[32mdef get_version(*file_paths):[m
[32m+[m[32m    filename = os.path.join(os.path.dirname(__file__), *file_paths)[m
[32m+[m[32m    version_file = open(filename).read()[m
[32m+[m[32m    version_match = re.search(r"^__version__ = ['\"]([^'\"]*)['\"]",[m
[32m+[m[32m                              version_file, re.M)[m
[32m+[m[32m    if version_match:[m
[32m+[m[32m        return version_match.group(1)[m
[32m+[m[32m    raise RuntimeError('Unable to find version string.')[m
[32m+[m
[32m+[m[32mversion = get_version('django_simple_chat', '__init__.py')[m
[32m+[m
[32m+[m[32mif sys.argv[-1] == 'publish':[m
[32m+[m[32m    try:[m
[32m+[m[32m        import wheel[m
[32m+[m[32m    except ImportError:[m
[32m+[m[32m        print('Wheel library missing. Please run "pip install wheel"')[m
[32m+[m[32m        sys.exit()[m
[32m+[m[32m    os.system('python setup.py sdist upload')[m
[32m+[m[32m    os.system('python setup.py bdist_wheel upload')[m
[32m+[m[32m    sys.exit()[m
[32m+[m
[32m+[m[32mif sys.argv[-1] == 'tag':[m
[32m+[m[32m    print("Tagging the version on github:")[m
[32m+[m[32m    os.system("git tag -a %s -m 'version %s'" % (version, version))[m
[32m+[m[32m    os.system("git push --tags")[m
[32m+[m[32m    sys.exit()[m
[32m+[m
[32m+[m[32mreadme = open('README.rst').read()[m
[32m+[m[32mhistory = open('HISTORY.rst').read().replace('.. :changelog:', '')[m
[32m+[m
[32m+[m[32msetup([m
[32m+[m[32m    name='django_simple_chat',[m
[32m+[m[32m    version=version,[m
[32m+[m[32m    description="""Django chat app""",[m
[32m+[m[32m    long_description=readme + '\n\n' + history,[m
[32m+[m[32m    author='Volkan Kaya',[m
[32m+[m[32m    author_email='volkan.kaya@hotmail.co.uk',[m
[32m+[m[32m    url='https://github.com/volkandkaya/django_simple_chat',[m
[32m+[m[32m    packages=[[m
[32m+[m[32m        'django_simple_chat',[m
[32m+[m[32m    ],[m
[32m+[m[32m    include_package_data=True,[m
[32m+[m[32m    install_requires=[[m
[32m+[m[32m    ],[m
[32m+[m[32m    license="BSD",[m
[32m+[m[32m    zip_safe=False,[m
[32m+[m[32m    keywords='django_simple_chat',[m
[32m+[m[32m    classifiers=[[m
[32m+[m[32m        'Development Status :: 3 - Alpha',[m
[32m+[m[32m        'Framework :: Django',[m
[32m+[m[32m        'Framework :: Django :: 1.8',[m
[32m+[m[32m        'Framework :: Django :: 1.9',[m
[32m+[m[32m        'Intended Audience :: Developers',[m
[32m+[m[32m        'License :: OSI Approved :: BSD License',[m
[32m+[m[32m        'Natural Language :: English',[m
[32m+[m[32m        'Programming Language :: Python :: 2',[m
[32m+[m[32m        'Programming Language :: Python :: 2.7',[m
[32m+[m[32m        'Programming Language :: Python :: 3',[m
[32m+[m[32m        'Programming Language :: Python :: 3.3',[m
[32m+[m[32m        'Programming Language :: Python :: 3.4',[m
[32m+[m[32m        'Programming Language :: Python :: 3.5',[m
[32m+[m[32m    ],[m
[32m+[m[32m)[m
[1mdiff --git a/tests/__init__.py b/tests/__init__.py[m
[1mnew file mode 100644[m
[1mindex 0000000..e69de29[m
[1mdiff --git a/tests/test_models.py b/tests/test_models.py[m
[1mnew file mode 100644[m
[1mindex 0000000..e197d78[m
[1m--- /dev/null[m
[1m+++ b/tests/test_models.py[m
[36m@@ -0,0 +1,25 @@[m
[32m+[m[32m#!/usr/bin/env python[m
[32m+[m[32m# -*- coding: utf-8 -*-[m
[32m+[m
[32m+[m[32m"""[m
[32m+[m[32mtest_django_simple_chat[m
[32m+[m[32m------------[m
[32m+[m
[32m+[m[32mTests for `django_simple_chat` models module.[m
[32m+[m[32m"""[m
[32m+[m
[32m+[m[32mfrom django.test import TestCase[m
[32m+[m
[32m+[m[32mfrom django_simple_chat import models[m
[32m+[m
[32m+[m
[32m+[m[32mclass TestDjango_simple_chat(TestCase):[m
[32m+[m
[32m+[m[32m    def setUp(self):[m
[32m+[m[32m        pass[m
[32m+[m
[32m+[m[32m    def test_something(self):[m
[32m+[m[32m        pass[m
[32m+[m
[32m+[m[32m    def tearDown(self):[m
[32m+[m[32m        pass[m
[1mdiff --git a/tox.ini b/tox.ini[m
[1mnew file mode 100644[m
[1mindex 0000000..c89f696[m
[1m--- /dev/null[m
[1m+++ b/tox.ini[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m[tox][m
[32m+[m[32menvlist = py27, py33, py34, py35[m
[32m+[m
[32m+[m[32m[testenv][m
[32m+[m[32msetenv =[m
[32m+[m[32m    PYTHONPATH = {toxinidir}:{toxinidir}/django_simple_chat[m
[32m+[m[32mcommands = python runtests.py[m
[32m+[m[32mdeps =[m
[32m+[m[32m    -r{toxinidir}/requirements-test.txt[m
