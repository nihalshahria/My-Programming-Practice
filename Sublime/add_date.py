import datetime, getpass
import sublime, sublime_plugin
class AddMomentCommand(sublime_plugin.TextCommand):
    def run(self, edit):
        self.view.run_command("insert_snippet", { "contents": "%s" %  datetime.datetime.now().strftime("%d.%m.%Y %H:%M:%S") } )
