
package NSLookup_h;
use strict; use Cwd 'realpath';  use File::Basename;  use lib dirname(__FILE__);  use SPL::Operator::Instance::OperatorInstance; use SPL::Operator::Instance::Context; use SPL::Operator::Instance::Expression; use SPL::Operator::Instance::InputAttribute; use SPL::Operator::Instance::InputPort; use SPL::Operator::Instance::OutputAttribute; use SPL::Operator::Instance::OutputPort; use SPL::Operator::Instance::Parameter; use SPL::Operator::Instance::StateVariable; use SPL::Operator::Instance::Window; 
sub main::generate($$) {
   my ($xml, $signature) = @_;  
   print "// $$signature\n";
   my $model = SPL::Operator::Instance::OperatorInstance->new($$xml);
   $SPL::CodeGenHelper::verboseMode = $model->getContext()->isVerboseModeOn();
   print '/* Additional includes go here */', "\n";
   print "\n";
   SPL::CodeGen::headerPrologue($model);
   print "\n";
   print "\n";
   print 'class MY_OPERATOR : public MY_BASE_OPERATOR ', "\n";
   print '{', "\n";
   print 'public:', "\n";
   print '  // Constructor', "\n";
   print '  MY_OPERATOR();', "\n";
   print "\n";
   print '  // Destructor', "\n";
   print '  virtual ~MY_OPERATOR(); ', "\n";
   print "\n";
   print '  // Notify port readiness', "\n";
   print '  void allPortsReady(); ', "\n";
   print "\n";
   print '  // Notify pending shutdown', "\n";
   print '  void prepareToShutdown(); ', "\n";
   print "\n";
   print '  // Processing for source and threaded operators   ', "\n";
   print '  void process(uint32_t idx);', "\n";
   print '    ', "\n";
   print '  // Tuple processing for mutating ports ', "\n";
   print '  void process(Tuple & tuple, uint32_t port);', "\n";
   print '    ', "\n";
   print '  // Tuple processing for non-mutating ports', "\n";
   print '  void process(Tuple const & tuple, uint32_t port);', "\n";
   print "\n";
   print '  // Punctuation processing', "\n";
   print '  void process(Punctuation const & punct, uint32_t port);', "\n";
   print 'private:', "\n";
   print '	// Define application-specific member variables to ', "\n";
   print '	// control the optional operator parameters that will be', "\n";
   print '	// passed from the SPL file.', "\n";
   print '	boolean nameServerNameNeeded;', "\n";
   print '	boolean nameServerAddessNeeded;', "\n";
   print '	boolean clientMachineNameNeeded;', "\n";
   print '	boolean clientMachineAddressNeeded;', "\n";
   print '}; ', "\n";
   print "\n";
   SPL::CodeGen::headerEpilogue($model);
   print "\n";
   print "\n";
   CORE::exit $SPL::CodeGen::USER_ERROR if ($SPL::CodeGen::sawError);
}
1;
