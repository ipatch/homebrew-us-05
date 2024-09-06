# frozen_string_literal: true

module Homebrew
  module Cmd
    class InstallExtension < AbstractCommand
      cmd_args do
        description <<~EOS
          This is an extension of the `brew install` command.
        EOS
        switch "-f", "--force",
               description: "Force the installation of the formula."
        flag   "--extra-option=",
               description: "Specify an extra option to use during installation."

        named_args [:formula], min: 1
      end

      def run
        args.named.each do |formula|
          # Custom behavior before install
          ohai "Running custom pre-install hook for #{formula}"

          # Pass control back to the regular `brew install`
          install_args = [formula]
          install_args << "--force" if args.force?
          install_args << "--extra-option=#{args.extra_option}" if args.extra_option

          # Call the standard `brew install` with extended arguments
          Homebrew.install(*install_args)

          # Custom behavior after install
          ohai "Running custom post-install hook for #{formula}"
        end
      end
    end
  end
end
