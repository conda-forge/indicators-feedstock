#include <indicators/block_progress_bar.hpp>
#include <indicators/progress_bar.hpp>
#include <indicators/progress_spinner.hpp>

int main() {
  using namespace indicators;

  ProgressBar bar{option::BarWidth{40}, option::Start{"["}, option::Fill{"="},
                  option::Lead{">"},    option::Remainder{" "}, option::End{"]"},
                  option::MaxProgress{10}, option::ShowPercentage{true}};
  for (int i = 0; i < 10; ++i) {
    bar.tick();
  }

  BlockProgressBar block{option::BarWidth{40}, option::MaxProgress{10}};
  for (int i = 0; i < 10; ++i) {
    block.tick();
  }
  block.mark_as_completed();

  ProgressSpinner spinner{option::PostfixText{"done"}, option::MaxProgress{10}};
  for (int i = 0; i < 10; ++i) {
    spinner.tick();
  }
  spinner.mark_as_completed();

  return bar.is_completed() ? 0 : 1;
}
