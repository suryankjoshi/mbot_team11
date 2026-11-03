import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mbot/Desktop/botlab/mbot_ws/install/mbot_vision'
