from distutils.core import setup
setup(name='btcspendfrom',
      version='1.0',
      description='Command-line utility for dgdollartest2 "coin control"',
      author='Gavin Andresen',
      author_email='gavin@dgdollartest2foundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
