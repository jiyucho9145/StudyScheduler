#!/usr/bin/env python3

import sys
import os
import codecs
import json
import sqlite3
from studyscheduler import Facade

class App:

    def run(self):
        facade = Facade()
        facade.run()
        return 0

if __name__ == '__main__':
    app = App()
    sys.exit(app.run())
