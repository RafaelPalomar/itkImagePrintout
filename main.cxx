#include <iostream>
#include <itkImageFileReader.h>
#include <itkStatisticsImageFilter.h>

int main(int argc, char **argv)
{
  typedef itk::Image<short,3> ImageType;
  typedef itk::ImageFileReader<ImageType> ReaderType;
  typedef itk::StatisticsImageFilter<ImageType> StatisticsType;

  ReaderType::Pointer reader = ReaderType::New();
  reader->SetFileName(argv[1]);

  StatisticsType::Pointer statistics = StatisticsType::New();
  statistics->SetInput(reader->GetOutput());
  statistics->Update();

  std::cout << statistics->GetMinimum() << std::endl
	    << statistics->GetMaximum() << std::endl;
  
  return EXIT_SUCCESS;
}
