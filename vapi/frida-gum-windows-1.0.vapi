[CCode (cheader_filename = "gum/gumwindows.h")]
namespace Gum.Windows {
	public Gum.Address find_entrypoint (void* process);
	public void enumerate_threads (uint32 process_id, Gum.FoundThreadFunc func);
	public void enumerate_modules (void* process, Gum.FoundModuleFunc func);
}
